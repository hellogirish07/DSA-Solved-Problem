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

void print_tree(Node* root) {
    if (root == NULL) return;
    cout << root->data << " ";
    print_tree(root->left);
    print_tree(root->right);
}

int sumTree(Node* root) {
    if (root == NULL) return 0;

    int leftSum = sumTree(root -> left);
    int rightSum = sumTree(root -> right);

    root -> data += leftSum + rightSum;
    return root -> data;
}

int main() {
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1}; 
    Node* root = buildTree(preorder);

    cout << "Before Convertion :" ;
    print_tree(root);
    cout << endl;
    
    sumTree(root);
    
    cout << "After Convertion :" ;
    print_tree(root);

    return 0;
}