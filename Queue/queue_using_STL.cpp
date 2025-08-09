# include <iostream> 
# include <queue>
using namespace std;

int main() {
    queue<int> q;

    // Push elements into the queue
    q.push(10);
    q.push(20);
    q.push(30);
    cout << "Queue using STL" << endl;
    cout << "Pushing elements into the queue..." << endl;

    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

    cout << endl;
    cout << "Queue is now empty." << endl;
    return 0;
}
