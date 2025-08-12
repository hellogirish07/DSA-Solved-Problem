# include <iostream> 
# include <vector>
# include <queue>
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

// Preorder traversal: Root -> Left -> Right
void preorder_traversal(Node* root) {
    if (root == NULL) return;
    cout << root->data << " ";
    preorder_traversal(root->left);
    preorder_traversal(root->right);
}

// Inorder traversal: Left -> Root -> Right
void inorder_traversal(Node* root) {
    if (root == NULL) return;
    inorder_traversal(root->left);
    cout << root->data << " ";
    inorder_traversal(root->right);
}

// Postorder traversal: Left -> Right -> Root
void postorder_traversal(Node* root) {
    if (root == NULL) return;
    postorder_traversal(root->left);
    postorder_traversal(root->right);
    cout << root->data << " ";
}

// Level order traversal 
void level_order_traversal(Node* root) {
    queue<Node*> q;
    q.push(root);
    q.push(NULL); // Marker for end of level

    while (!q.empty()) {
        Node* current = q.front();
        q.pop();

        if (current == NULL) {
            if (!q.empty()) {
                cout << "\n"; // New line for next level
                q.push(NULL); // Add marker for next level
                continue;
            } else break; // No more nodes 
        }

        cout << current->data << " ";

        if (current->left != NULL) {
            q.push(current->left);
        }

        if (current->right != NULL) {
            q.push(current->right);
        }
    }  
}


int main() {
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

    Node* root = buildTree(preorder);

    cout << "Binary tree constructed successfully." << endl;

    cout << "Preorder traversal of the tree: "; // Output : 1 2 3 4 5
    preorder_traversal(root);

    cout << "\nInorder traversal of the tree: "; // Output : 2 1 4 3 5
    inorder_traversal(root);

    cout << "\nPostorder traversal of the tree: "; // Output : 2 4 5 3 1
    postorder_traversal(root);

    cout << "\nLevel order traversal of the tree: "; 
    cout << endl;                                    
    level_order_traversal(root);
    cout << endl;

    // Output : 1
    //        2 3
    //        4 5
    
    return 0;
}