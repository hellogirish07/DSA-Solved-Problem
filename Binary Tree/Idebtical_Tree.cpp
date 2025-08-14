#include <iostream>

using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int value) {
        data = value;      
        left = NULL;
        right = NULL;     
    }
};

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p == NULL || q == NULL) {
            return p == q;
        }

        bool left = isSameTree(p->left, q->left);
        bool right = isSameTree(p->right, q->right);

        return left && right && p -> data == q -> data;
    }
};

int main() {
    // Example trees:
    // Tree 1
    TreeNode* root1 = new TreeNode(1);
    root1->left = new TreeNode(2);
    root1->right = new TreeNode(3);

    // Tree 2
    TreeNode* root2 = new TreeNode(1);
    root2->left = new TreeNode(2);
    root2->right = new TreeNode(3);

    Solution sol;
    if (sol.isSameTree(root1, root2)) {
        cout << "The trees are identical." << endl;
    } else {
        cout << "The trees are not identical." << endl;
    }
    return 0;
}