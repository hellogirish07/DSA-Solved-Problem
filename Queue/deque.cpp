# include <iostream> 
# include <deque>
using namespace std;

int main() {
    cout << "Deque using STL" << endl;
    deque<int> dq;

    cout << "Pushing elements into the deque..." << endl;
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);

    cout << "Front element: " << dq.front() << endl;
    cout << "Back element: " << dq.back() << endl;
    
    dq.push_front(5);
    dq.push_front(6);
    dq.push_front(7);
    
    cout << "Front element: " << dq.front() << endl;
    cout << "Back element: " << dq.back() << endl;

    while(!dq.empty()) {
        cout << dq.front() << " ";
        dq.pop_front();
        // dq.pop_back();
    }
    cout << endl;
    cout << "Deque is now empty." << endl;

    return 0;
}