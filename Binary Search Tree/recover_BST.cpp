#include <iostream>
using namespace std;

// Definition for a binary tree node
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) {
        val = x;
        left = NULL;
        right = NULL;
    }
};

class Solution {
public:
    TreeNode* prev = NULL;
    TreeNode* first = NULL;
    TreeNode* sec = NULL;

    void inorderDetect(TreeNode* root) {
        if (root == NULL) return;

        inorderDetect(root->left);

        if (prev != NULL && prev->val > root->val) {
            if (first == NULL)
                first = prev;
            sec = root;
        }

        prev = root;

        inorderDetect(root->right);
    }

    void recoverTree(TreeNode* root) {
        inorderDetect(root);

        if (first && sec) {
            int temp = first->val;
            first->val = sec->val;
            sec->val = temp;
        }
    }
};

// Utility function to print inorder traversal
void printInorder(TreeNode* root) {
    if (root == NULL) return;

    printInorder(root->left);
    cout << root->val << " ";
    printInorder(root->right);
}

int main() {

    /*
        Creating the corrupted BST:

                6
              /   \
             3     4
            / \     \
           1   8     9

        (8 and 4 are swapped)
    */

    TreeNode* root = new TreeNode(6);
    root->left = new TreeNode(3);
    root->right = new TreeNode(4);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(8);
    root->right->right = new TreeNode(9);

    cout << "Inorder Before Recovery: ";
    printInorder(root);
    cout << endl;

    Solution obj;
    obj.recoverTree(root);

    cout << "Inorder After Recovery: ";
    printInorder(root);
    cout << endl;

    return 0;
}