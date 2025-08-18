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

void topView(Node* root) {
    if (root == NULL) return;

    queue<pair<Node*, int>> q;
    map<int, int> topViewMap;
    q.push(make_pair(root, 0));

    while (q.size() > 0) {
        Node* current = q.front().first;
        int currentHD = q.front().second;
        q.pop();

        if (topViewMap.find(currentHD) == topViewMap.end()) {
            topViewMap[currentHD] = current->data;
        }

        if (current->left != NULL) {
            q.push({current->left, currentHD - 1});
        }

        if (current->right != NULL) {
            q.push({current->right, currentHD + 1});
        }
    }

    for (auto it : topViewMap) {
        cout << it.second << " ";
    }

    cout << endl;
}

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


int main() {
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1}; 
    Node* root = buildTree(preorder);

    cout << "Top view of the tree: ";
    topView(root);
    return 0;
}