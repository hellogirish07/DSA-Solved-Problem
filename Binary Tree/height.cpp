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

// Heigght of the tree
int height(Node* root) {
    if (root == NULL) return 0;
    int left = height(root -> left);
    int right = height(root -> right);
    return max(left, right) + 1;
}

// count of nodes
int count(Node* root) {
    if (root == NULL) return 0;
    int left = count(root -> left);
    int right = count(root -> right);
    return left + right + 1;
}

// Sum of nodes
int sum(Node* root) {
    if (root == NULL) return 0;
    int left = sum(root -> left);
    int right = sum(root -> right);
    return left + right + root -> data;
}

// printing the tree 
void print_tree(Node* root) {
    if (root == NULL) return;
    cout << root->data << " ";
    print_tree(root->left);
    print_tree(root->right);
}

int main() {
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

    Node* root = buildTree(preorder);

    cout << "Printing the tree: ";
    print_tree(root);
    cout << endl;

    cout << "Height of the tree: " << height(root) << endl;
    cout << "Count of the Nodes: " << count(root) << endl;
    cout << "Sum of the Nodes: " << sum(root) << endl;
    return 0;
}