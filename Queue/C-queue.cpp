# include <iostream> 

using namespace std;

class CircularQueue {
    int *arr;
    int front, rear, currSize, cap;
public:
    CircularQueue(int size) {
        arr = new int[size];
        cap = size;
        front = 0;
        rear = -1;
        currSize = 0;
    }

    bool enpty() {
        return (currSize == 0);
    }

    void push(int data) { // O(1)
        if (currSize == cap) {
            cout << "Queue is full. Cannot push " << data << endl;
            return;
        }
        rear = (rear + 1) % cap; // Circular increment
        arr[rear] = data;
        currSize++;
        cout << "Pushed " << data << " into the queue." << endl;
    }

    void pop() { // O(1)
        if (enpty()) {
            cout << "Queue is empty. Cannot pop." << endl;
            return;
        }

        front = (front + 1) % cap;
        currSize--;
        cout << "Popped " << arr[front] << " from the queue." << endl;
    }

    int frontElement() { // O(1)
        if (enpty()) {
            cout << "Queue is empty. No front element." << endl;
            return -1; // Indicating empty queue
        }
        return arr[front];
    }

    int print() {
        if (enpty()) {
            cout << "Queue is empty." << endl;
            return -1; // Indicating empty queue
        }
        cout << "Queue elements: ";
        for (int i = 0; i < currSize; i++) {
            cout << arr[(front + i) % cap] << " ";
        }
    }
};

int main() {
    CircularQueue cq(5);
    cout << "Circular Queue using custom implementation" << endl;
    cq.push(10);
    cq.push(20);
    cq.push(30);
    cq.push(40);
    cq.push(50);
    cq.print();
    cout << "\nFront element: " << cq.frontElement() << endl;
    cq.pop();
    cq.pop();
    cq.pop();
    cq.print();
    cout << "\nFront element: " << cq.frontElement() << endl;
    return 0;
}