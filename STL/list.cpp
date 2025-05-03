# include <iostream> 
# include <list>
using namespace std;
int main()
{
    list<int> l1;
    // list<int> l2(5, 100);

    // push from back
    l1.push_back(10);
    l1.push_back(20);

    // push from front
    l1.push_front(5);
    l1.push_front(1);

    // print the list
    for (auto i = l1.begin(); i != l1.end(); i++)
    {
        cout << *i << " ";
    }
    // cout << endl;
    return 0;
}