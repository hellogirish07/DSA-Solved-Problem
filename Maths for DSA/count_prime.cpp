# include <iostream> 
# include <vector>
using namespace std;

// By Sierra's method
// Count the number of prime numbers in a given range [1, n]
class CountPrime
{
    public:
    pair<int, vector<int>> countPrime(int n) {
        vector<bool> isPrime(n + 1, true);
        vector<int> primes;
        int count = 0;

        for(int i = 2; i < n; i++) {
            if(isPrime[i]) {
                count++;
                primes.push_back(i);

                for(int j = i * 2; j < n; j = j + i) {
                    isPrime[j] = false;
                }
            }
        }
        return {count, primes};
    }
};

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    CountPrime cp;
    auto result = cp.countPrime(n);
    cout << "Number of prime numbers in the range [1, " << n << "] is: " << result.first << endl;
    
    cout << "The prime numbers are: ";
    
    for (int prime : result.second) {
        cout << prime << " ";
    }
    cout << endl;
    return 0;
}