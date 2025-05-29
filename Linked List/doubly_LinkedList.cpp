# include <iostream> 
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val){
        data = val;
        next = prev = NULL;
    }
};

class DoublyLinkedList {
private:
    Node* head;
    Node* tail;
public:
    DoublyLinkedList() {
        head = tail = NULL;
    }

    // Push front 
    void push_front(int val) {
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = tail = newNode;
        } else {
            newNode -> next = head;
            head -> prev = newNode;
            head = newNode;
        }
    }

    // Push back
    void push_back(int val) {
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = tail = newNode;
        } else {
            newNode -> prev = tail;
            tail -> next = newNode;
            tail = newNode;
        }
    }

    // Pop front
    void pop_front() {
        if (head == NULL) {
            cout << "List is empty, cannot pop front." << endl;
            return;
        }
        Node* temp = head;
        head = head -> next;

        if (head != NULL) {
            head -> prev = NULL;
        } 
        temp -> next = NULL;
        delete temp;
    }

    // Pop back
    void pop_back() {
        if (tail == NULL) {
            cout << "List is empty, cannot pop back." << endl;
            return;
        }
        Node* temp = tail;
        tail = tail -> prev;

        if (tail != NULL) {
            tail -> next = NULL;
        }
        temp -> prev = NULL;
        delete temp;
    }

    // Reverse 
    void reverse() {
        Node* temp = tail;
        while (temp != NULL) {
            cout << temp -> data << " <-> ";
            temp = temp -> prev;
        }
        cout << "NULL" << endl;
    }

    // Print function
    void print() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " <-> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    cout << "Doubly Linked List Implementation" << endl;
    DoublyLinkedList dll;

    cout << "Inserting data at front: \n";
    dll.push_front(10);
    dll.push_front(20);
    dll.push_front(30);
    dll.print();

    cout << "Inserting data at back: \n";
    dll.push_back(40);
    dll.push_back(50);
    dll.push_back(60);
    dll.print();

    cout << "Popping front element: \n";
    dll.pop_front();
    dll.print();

    cout << "Poping back element: \n";
    dll.pop_back();
    dll.print(); 

    cout << "Reverse the list: \n";
    dll.reverse();

    return 0;
}