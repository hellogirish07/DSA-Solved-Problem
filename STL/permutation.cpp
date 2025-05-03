# include <iostream> 
# include <vector>
# include <string>
# include <algorithm>
using namespace std;
int main()
{
    // Next Permutation
    string str = "bca";
    cout << "Original string: " << str << endl;

    // Generate next permutation
    next_permutation(str.begin(), str.end());
    cout << "Next permutation: " << str << endl;
    
    // Generate Previos permutation
    prev_permutation(str.begin(), str.end());
    cout << "Previous permutation: " << str << endl;
    
    return 0;
}