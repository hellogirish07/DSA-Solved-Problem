# include <iostream> 

using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

class List {
    Node* head;
    Node* tail;

public:
    List() {
        head = NULL;
        tail = NULL;
    }

    // his method adds a new node at the beginning of the list
    void push_data(int value) {
        Node* newNode = new Node(value);
        if (head == NULL) {
            head = tail = newNode;
            return;
        } else {
            newNode -> next = head;
            head = newNode;
        }
    }

    void print() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp -> data << " -> ";
            temp = temp -> next;

            if (temp == NULL) {
                cout << "NULL";
            }
        }
        cout << endl;
    }

    // reverse the linked list
    void reverse() {
        Node* prev = NULL;
        Node* current = head;
        Node* next = NULL;

        while (current != NULL) {
            next = current -> next; // Store next node
            current -> next = prev; // Reverse the link
            prev = current;         // Move prev to current
            current = next;        // Move to next node
        }

        head = prev; // Update head to the new first node
    }
};

int main() {
    List list;

    cout<< "Original List: " << endl;
    list.push_data(10);
    list.push_data(20);
    list.push_data(30);
    list.push_data(40);
    list.push_data(50);
    list.print(); 

    cout<< "Reversed List: " << endl;
    list.reverse();
    list.print(); 

    return 0;
}