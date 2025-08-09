# include <iostream>
# include <queue>
using namespace std;

class MyStack {
public:
    queue<int> q1, q2;
    MyStack() {
        // Constructor initializes the stack using two queues
    }

    void push(int x) {
        while(!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }
        
        q1.push(x);

        while(!q2.empty()) {
            q1.push(q2.front());
            q2.pop();
        }
    }

    int pop() {
        int ans = q1.front();
        q1.pop();
        return ans;
    }

    int top() {
        return q1.front();
    }

    bool empty() {
        return q1.empty();
    }

    int print() {
        if (q1.empty()) {
            cout << "Stack is empty." << endl;
            return -1; // Indicating stack is empty
        }
        
        cout << "Stack elements: ";
        queue<int> temp = q1; // Create a copy to print without modifying original
        while (!temp.empty()) {
            cout << temp.front() << " ";
            temp.pop();
        }
        cout << endl;
        return 0; // Indicating success
    }
};

int main() {
    MyStack stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);  
    stack.print();
    cout << "Top element: " << stack.top() << endl;
    cout << "Popped element: " << stack.pop() << endl;
    stack.print();
    cout << "Top element: " << stack.top() << endl;
    return 0;
}