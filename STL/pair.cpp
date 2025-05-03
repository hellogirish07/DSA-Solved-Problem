# include <iostream> 
# include <utility>
# include <vector>
using namespace std;

int main()
{
    // simple par
    cout << "Simple Pair: " << endl;
    pair<int, char> p1 = {1, 'a'};
    cout << "First: " << p1.first << endl;
    cout << "Second: " << p1.second << endl;
    cout << endl;

    // nested pair
    cout << "Nested Pair: " << endl;
    pair<int, pair<string, double>> np = {1, {"Hello", 3.14}};
    cout << "First: " << np.first << endl;
    cout << "Second (String): " << np.second.first << endl;
    cout << "Second (Double): " << np.second.second << endl;
    cout << endl;

    // pairs of pair
    cout << "Pair of Pair: " << endl;
    pair<pair<int, int>, pair<string, double>> pp = {{10, 20}, {"Pi", 3.1415}};
    cout << "First Pair: " << pp.first.first << ", " << pp.first.second << endl;
    cout << "Second Pair: " << pp.second.first << ", " << pp.second.second << endl;
    cout << endl;

    // vector of nested pairs 
    cout << "Vector of Nested Pairs: " << endl;
    vector<pair<int, pair<string, double>>> v;
    v.push_back({1, {"Apple", 10.5}});
    v.push_back({2, {"Banana", 5.25}});
    v.push_back({3, {"Cherry", 8.75}});
    for (auto p : v) {
        cout << "ID: " << p.first << ", Name: " << p.second.first << ", Price: " << p.second.second << endl;
    }
    return 0;
}