# include <iostream> 
# include <stack>
# include <vector>
using namespace std;

int main()
{
    stack<int> q1;
    stack<int> q2 ;

    q1.push(1);
    q1.push(2);
    q1.push(3);

    while (q1.empty() == false) {
        cout << q1.top() << " ";
        q1.pop();
    }
    cout << endl;
    
    return 0;
}