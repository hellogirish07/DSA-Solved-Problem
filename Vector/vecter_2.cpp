# include <iostream> 
# include <vector>
using namespace std;

int main()
{
    vector<int> vac;
    vac.push_back(4);
    vac.push_back(5);
    vac.push_back(6);

    cout << "Size : " << vac.size() << endl;
    cout << "Capacity : " << vac.capacity() << endl;
    return 0;
}