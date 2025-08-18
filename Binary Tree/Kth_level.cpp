# include <iostream> 
# include <vector>
# include <algorithm>
# include <queue>
# include <utility>
# include <map>
# include <set>
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


Node* buildTree(const vector<int>& preorder, int& index) {
    index++;

    if (index >= preorder.size() || preorder[index] == -1) {
        return NULL;
    }

    Node* root = new Node(preorder[index]);
    root->left = buildTree(preorder, index);
    root->right = buildTree(preorder, index);

    return root;
}

void kthLevel(Node* root, int k) {
    if (root == NULL) return;

    if (k == 0) {
        cout << root -> data << " ";
        return;
    }

    kthLevel(root->left, k - 1);
    kthLevel(root->right, k - 1);
}


int main() {
    vector<int> preorder = {1, 2, 7, -1, -1, 3, 4, -1, -1, 5, -1, -1}; 
    int index = -1;
    Node* root = buildTree(preorder, index);
    int k = 3;
    cout << "Elements at level " << k << ": ";
    kthLevel(root, k);
    cout << endl;
    return 0;
}