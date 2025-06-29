#include <iostream>
#include <vector>
using namespace std;

class Stack {
private:
    vector<int> stack;

public:
    void push(int value) {
        stack.push_back(value);
    }

    void pop() {
        if (!isEmpty())
            stack.pop_back();
        else
            cout << "Stack Underflow!" << endl;
    }

    int top() {
        if (!isEmpty())
            return stack.back();
        else {
            cout << "Stack is empty!" << endl;
            return -1;
        }
    }

    bool isEmpty() {
        return stack.empty();
    }

    int size() const {
        return stack.size();
    }
};

int main() {
    Stack s;
    cout << "Stack using vector" << endl;
    cout << "Pushing elements onto the stack:" << endl;
    s.push(10);
    s.push(20);
    s.push(30);

    while (!s.isEmpty()) {
        cout << s.top() << endl;
        s.pop();
    }

    return 0;
}
