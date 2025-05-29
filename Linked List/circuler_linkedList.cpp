# include <iostream> 
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = NULL;
    }
};

class CircularLinkedList {
    Node* head;
    Node* tail;

public:
    CircularLinkedList() {
        head = tail = NULL;
    }

    void insert_at_head(int val) {
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = tail = newNode;
            tail -> next = head; 
        } else {
            newNode -> next = head;
            head = newNode;
            tail -> next = head; 
        }
    }

    void insert_at_tail(int val) {
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = tail = newNode;
            tail -> next = head;
        } 
        else {
            newNode -> next = head;
            tail -> next = newNode;
            tail = newNode;
        }
    }

    void delete_at_head() {
        if (head == NULL) { 
            // No Node
            cout << "List is empty, cannot delete head." << endl;
            return;
        } else if (head == tail ) { 
            // Only one Node
            delete head;
            head = tail = NULL;
        } else { 
            // More than one Node
            Node* temp = head;
            head = head -> next;
            tail -> next = head; 
            temp -> next = NULL; 
            delete temp;
        }
    }

    void delete_at_tail() {
        if (head == NULL) {
            cout << "List is empty, cannot delete tail." << endl;
            return;
        } else if (head == tail) {
            // Only one Node
            delete head;
            head = tail = NULL;
        } else {
            // More than one Node

            // Node* temp = head;
            // while (temp -> next != tail) {
            //     temp = temp -> next;
            // }
            // temp -> next = head; 
            // delete tail;
            // tail = temp;

            Node* temp = tail;
            Node* prev = head;
            while (prev -> next != tail) {
                prev = prev -> next;
            }
            tail = prev;
            tail -> next = head;
            temp -> next = NULL;
            delete temp;
        }
    }

    void print() {
        if (head == NULL) {
            cout << "List is empty." << endl;
            return;
        }
        cout << head -> data << " -> ";
        Node* temp = head -> next;

        while (temp != head) {
            cout << temp -> data << " -> ";
            temp = temp -> next;
        }

        cout << "[head: " << head -> data << "]" << endl;
    }
};

int main() {
    CircularLinkedList cll;

    cout << "Inserting elements at head:" << endl;
    cll.insert_at_head(10);
    cll.insert_at_head(20);
    cll.insert_at_head(30);
    cll.print();

    cout << "Inserting elements at tail:" << endl;
    cll.insert_at_tail(40);
    cll.insert_at_tail(50);
    cll.insert_at_tail(60);
    cll.print();

    cout << "Original list:" << endl;
    cll.print();

    cout << "Deleting head:" << endl;
    cll.delete_at_head();
    cll.print();

    cout << "Deleting tail:" << endl;
    cll.delete_at_tail();
    cll.print();
    return 0;
}