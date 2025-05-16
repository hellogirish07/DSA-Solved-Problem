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

    // Push front method -> This method adds a new node at the beginning of the list
    void push_front(int value) {
        Node* newNode = new Node(value);
        if (head == NULL) {
            head = tail = newNode;
            return;
        } else {
            newNode -> next = head;
            head = newNode;
        }
    }

    // Pudh_back method -> This method adds a new node at the end of the list
    void push_back(int value) {
        Node* newNode = new Node(value);
        if (head == NULL) {
            head = tail = newNode;
            return;
        } else {
            tail -> next = newNode;
            tail = newNode;
        }
    }

    // this method inserts a new node at a specific position in the list
    void insert(int value, int pos) {
        if (pos < 0) {
            cout << "Invalid position." << endl;
            return;
        }

        if (pos == 0) {
            push_front(value);
            return;
        }

        Node * temp = head;
        for (int i = 0; i < pos - 1 && temp != NULL; i++) {
            if (temp == NULL) {
                cout << "Position out of bounds." << endl;
                return;
            }
            temp = temp -> next;
        }

        Node* newNode = new Node(value);
        newNode -> next = temp -> next;
        temp -> next = newNode;
    }

    // Pop front method -> This method removes the first node from the list
    void pop_front() {
        if (head == NULL) {
            cout << "Lined List is empty, nothing to pop." << endl;
            return;
        }

        Node * temp = head;
        head = head -> next;
        temp -> next = NULL;
        delete temp;
    }

    // Pop back method -> This method removes the last node from the list
    void pop_back() {
        if (head == NULL ) {
            cout << "Linked List is empty, nothing to pop." << endl;
            return;
        }

        Node* temp = head;
        while(temp -> next != tail) {
            temp = temp -> next;
        }

        temp -> next = NULL;
        delete tail;
        tail = temp;
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
    
    // search method -> This method searches for a specific value in the list
    int search(int key) {
        Node* temp = head;
        int idx = 0;

        while (temp != NULL) {
            if (temp -> data == key) {
                cout << "Element found at index: " << idx << endl;
                return idx;
            }

            temp = temp -> next;
            idx++;
        }

        cout << "Element not found in the list." << endl;
        return -1;
    }
};

int main() {
    List list;

    cout << "Linked List after pushing elements to the front: \n";
    list.push_front(1);
    list.push_front(2);
    list.push_front(3);
    list.print(); 

    cout << "Linked List after pushing elements to the back: \n";
    list.push_back(4);
    list.push_back(5);
    list.push_back(6);
    list.print(); 

    cout << "Linked List after inserting elements at specific positions: \n";
    list.insert(7, 3);
    list.print();

    cout << "Linked List after deleting elements from the front: \n";
    list.pop_front();
    list.print(); 

    cout << "Linked List after deleting elements from the back: \n";
    list.pop_back();
    list.print(); 

    cout << "Searching for an element in the list (key = 4): \n";
    list.search(4);
    return 0;
}