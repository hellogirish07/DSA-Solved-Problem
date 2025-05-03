# include <iostream> 
# include <vector>
# include <unordered_map>
using namespace std;

// Brute force approach
int subArraySum(vector<int> &num, int k){
    int n = num.size();
    int count = 0;
    for (int i = 0; i < n; i++){
        int sum = 0;
        vector<int> subarray;
        for (int j = i; j < n; j++){
            sum += num[j];

            subarray.push_back(num[j]);
            if (sum == k){
                count++;
                cout << "Subarray: ";
                for (int val : subarray) {
                    cout << val << " ";
                }
                cout << endl;
            }
        }
    }
    return count;
}

// Hashing approach
int subarraySum_hashing(vector<int>& arr, int k) {
    int n = arr.size();
    int count = 0;

    vector<int> ps(n, 0);
    ps[0] = arr[0];

    // Prefix Sum - start from i = 1
    for (int i = 1; i < n; i++) {
        ps[i] = ps[i - 1] + arr[i];
    }

    unordered_map<int, int> m;
    for (int j = 0; j < n; j++) {
        if (ps[j] == k) count++;

        int val = ps[j] - k;
        if (m.find(val) != m.end()) {
            count += m[val];
        }

        m[ps[j]]++;
    }

    return count;
}

int main()
{
    vector<int> num = {9, 4, 20, 3, 10, 5};
    int k = 33;
    int result = subArraySum(num, k);
    cout << "Number of subarrays with sum " << k << ": " << result << endl;
    return 0;
}