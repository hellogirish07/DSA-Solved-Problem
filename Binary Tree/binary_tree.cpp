# include <iostream> 
# include <vector>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

static int index = -1;
Node* buildTree(vector<int> preorder) {
    index++;

    if (preorder[index] == -1) {
        return NULL;
    }

    Node* root = new Node(preorder[index]);
    root->left = buildTree(preorder);
    root->right = buildTree(preorder);

    return root;
}

void printTree(Node* root) {
    if (root == NULL) return;
    cout << root->data << " ";
    printTree(root->left);
    printTree(root->right);
}

int main() {
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

    Node* root = buildTree(preorder);

    cout << "Binary tree constructed successfully." << endl;
    cout << "Preorder traversal of the tree: ";
    printTree(root);
    cout << endl;
    return 0;
}