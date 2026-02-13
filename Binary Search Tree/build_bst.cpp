# include <iostream> 
# include <vector>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = right = NULL;
    }
};

Node* insert(Node* root, int value) {
    if (root == NULL) return new Node(value); // Base Case

    if (value < root -> data) {
        root -> left = insert(root -> left, value);
    } else {
        root -> right = insert(root -> right, value);
    }

    return root;
}

Node* buildBST(vector<int> arr) {
    Node* root = NULL;
    for (int value : arr) {
        root = insert(root, value);
    }

    return root;
}

bool search(Node* root, int key) {
    if (root == NULL ) return false;
    if (root -> data == key) return true;

    if (root -> data > key) {
        return search(root -> left, key);
    } else {
        return search(root -> right, key);
    }
}

void inorder(Node* root) {
    if (root == NULL) return;

    inorder(root -> left);
    cout << root -> data << " ";
    inorder(root -> right);
}

Node* getInOrderSuccessor(Node* root) {
    while (root != NULL && root -> left != NULL) {
        root = root -> left;
    }
    return root;
}

Node* delNode(Node* root, int key) {
    if (root == NULL) return NULL;

    if (key < root -> data) {
        root -> left = delNode(root -> left, key);
    } else if (key > root -> data) {
        root -> right = delNode(root -> right, key);
    } else {
        if (root -> left == NULL) {
            Node* temp = root -> right;
            delete root;
            return temp;
        } else if (root -> right == NULL) {
            Node* temp = root -> left;
            delete root;
            return temp;
        } else {
            Node* IS = getInOrderSuccessor(root -> right);
            root -> data = IS -> data;
            root -> right = delNode(root -> right, IS -> data);
        }
    }
    return root;
}

int main() {
    vector<int> arr = {3, 2, 1, 5, 6, 4};

    Node* root = buildBST(arr);

    cout << "Before :" ;
    inorder(root);
    cout << endl;

    root = delNode(root, 5);

    cout << "After :" ;
    inorder(root);
    cout << endl;


    // cout << search(root, 5) << endl; // 1
    // cout << search(root, 7) << endl; // 0
    return 0;
}