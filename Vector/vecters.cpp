# include <iostream> 
# include <vector>
using namespace std;

int main()
{
    vector<int> vac = {1, 2, 3};
    // vector<char> vac_2(3, 'A');

    cout << "Size : " << vac.size() << endl;

    vac.push_back(4);
    vac.push_back(5);
    vac.push_back(6);

    cout << "Size after push : " << vac.size() << endl;
    
    for (int i : vac) {
        cout << i << endl;
    }

    vac.pop_back();
    vac.pop_back();
    vac.pop_back();
    
    cout << "Size after pop : " << vac.size() << endl;

    for (int i : vac) {
        cout << i << endl;
    }

    // for (char i : vac_2) {
    //     cout << i << endl;
    // }

    cout << "Front : " << vac.front() << endl;
    cout << "Back : " << vac.back() << endl;

    return 0;
}