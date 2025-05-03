# include <iostream> 
# include <unordered_set>
# include <set>
using namespace std;

int main()
{
    set <int> s1;
    s1.insert(1);
    s1.insert(2);
    s1.insert(3);
    s1.insert(3); // Duplicate values are not allowed in set

    cout << "Set1 size : " << s1.size() << endl;
    cout << "Set1 elements : ";
    for (auto value: s1) {
        cout << value << " ";
    }
    cout << endl;

    cout << "s1 lower bound of 2 : " << *s1.lower_bound(2) << endl; // Output : 2
    cout << "s1 upper bound of 2 : " << *s1.upper_bound(2) << endl; // Output : 3

    // Multiset 
    multiset <int> s2;
    s2.insert(1);
    s2.insert(2);
    s2.insert(3);
    s2.insert(3); // Duplicate values are allowed in multiset

    cout << "Set2 elements : ";
    for (auto val : s2) {
        cout << val << " ";
    }
    cout << endl;

    // Unordered set
    unordered_set <int> s3;
    s3.insert(1);
    s3.insert(2);
    s3.insert(3);
    s3.insert(3); // Duplicate values are not allowed in unordered set
    cout << "Unordered set elements : ";    
    for (auto val : s3) {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}