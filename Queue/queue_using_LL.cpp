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

class Queue {
    Node* head;
    Node* tail;

public:
    Queue() {
        head = NULL;
        tail = NULL;
    }

    void push(int data) {
        // insert at the end of the queue
        Node* newNode = new Node(data);
        if(empty()) {
            head = tail = newNode;
        } else {
            tail -> next = newNode;
            tail = newNode;
        }
    }

    void pop() {
        // remove from the front of the queue
        if(empty()) {
            cout << "Queue is empty!" << endl;
            return;
        }

        Node* temp = head;
        head = head -> next;
        delete temp;
    }

    int front() {
        if(empty()) {
            cout << "Queue is empty!" << endl;
            return -1; // or throw an exception
        }
        return head -> data;
    }

    bool empty() {
        return head == NULL;
    }
};

int main() {
    Queue q;

    cout << "Queue using Linked List" << endl;
    cout << "Pushing elements into the queue..." << endl;

    q.push(10);
    q.push(20);
    q.push(30);

    while (!q.empty()) {
        cout << q.front() << " " ;
        q.pop();
    }

    cout << endl;
    return 0;
}