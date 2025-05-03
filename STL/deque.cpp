# include <iostream> 
# include <deque>
using namespace std;

int main()
{
    deque<int> d1;
    // deque<int> d2(5, 100);

    // push from back
    d1.push_back(10);
    d1.push_back(20);

    // push from front
    d1.push_front(5);
    d1.push_front(1);

    // print the deque
    for (auto i = d1.begin(); i != d1.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
    return 0;
}