# include <iostream> 
# include <list>
using namespace std;

class Stack {
private:
    list<int> stack;

public:
    void push(int value) {
        stack.push_front(value);
    }

    void pop() {
        if (!isEmpty())
            stack.pop_front();
        else {
            cout << "Stack Underflow!" << endl;
        }
    }

    int top() {
        if (!isEmpty())
            return stack.front();
        else {
            cout << "Stack is empty!" << endl;
            return -1; // Return a sentinel value
        }
    }

    bool isEmpty() {
        return stack.empty();
    }
};

int main() {
    Stack s;
    cout << "Stack using linked list" << endl;
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