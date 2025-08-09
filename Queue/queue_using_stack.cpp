# include <iostream> 
# include <stack>
using namespace std;

class MyQueue {
public:
    stack<int> s1, s2;

    MyQueue() {
        // Constructor initializes the queue using two stacks
    }

    void push(int x) {
        while(!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }

        s1.push(x);

        while(!s2.empty()) {
            s1.push(s2.top());
            s2.pop();
        }
    }

    int pop() {
        int ans = s1.top();
        s1.pop();
        return ans;
    }

    int peek() {
        return s1.top();
    }

    bool empty() {
        return s1.empty();
    }

    int print() {
        if (s1.empty()) {
            cout << "Queue is empty." << endl;
            return -1; // Indicating queue is empty
        }

        cout << "Queue elements: ";
        stack<int> temp = s1; // Create a copy to print without modifying original
        while (!temp.empty()) {
            cout << temp.top() << " ";
            temp.pop();
        }
        cout << endl;
        return 0; // Indicating success
    }
};

int main() {
    MyQueue queue;
    queue.push(1);
    queue.push(2);
    queue.push(3);
    queue.push(4);
    queue.push(5);
    queue.print();
    cout << "Front element: " << queue.peek() << endl;
    cout << "Popped element: " << queue.pop() << endl;
    queue.print();
    cout << "Front element: " << queue.peek() << endl;
    return 0;
}