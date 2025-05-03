# include <iostream> 

using namespace std;

int main()
{
    int ans = 0;
    int pow = 1;
    int binNum, originalBin;

    cout << "Enter a number: ";
    cin >> binNum;

    originalBin = binNum;

    while (binNum > 0)
    {
        int rem = binNum % 10;
        ans += rem * pow;
        binNum /= 10;
        pow *= 2;
    }
    
    cout << "Binary : " << originalBin << endl;
    cout << "Decimal : " << ans << endl;

    return 0;
}