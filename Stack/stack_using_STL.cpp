# include <iostream> 
# include <stack>
# include <vector>
using namespace std;

int main() {
    stack<int> s;
    cout << "Stack using STL stack" << endl;
    cout << "Pushing elements onto the stack:" << endl;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    while (!s.empty()) {
        cout << s.top() << endl;
        s.pop();
    }
    return 0;
}