# include <iostream> 
# include <queue>
# include <vector>
using namespace std;

int main()
{
    queue<int> q1;
    queue<int> q2 ;

    q1.push(1);
    q1.push(2);
    q1.push(3);

    while (q1.empty() == false) {
        cout << q1.front() << " ";
        q1.pop();
    }
    cout << endl;
    
    // priority queue
    priority_queue<int> pq;

    pq.push(5);
    pq.push(1);
    pq.push(3);
    pq.push(2);
    pq.push(4);

    while (pq.empty() == false) {
        cout << pq.top() << " ";
        pq.pop();
    }

    return 0;
}