#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long;
class solution
{
public:
    solution()
    {
        int n;
        cin >> n;
        long long mod = pow(10, 9) + 7;
        long long res = 1;
        long long sixes = 1;
        for (int i = 0; i < 3 * n; i++)
        {
            res *= 3;
            res %= mod;
        }
        for (int i = 0; i < n; i++)
        {
            sixes *= 7;
            sixes %= mod; 
        }
        cout << (res + mod - sixes) % mod;
    }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solution *x = new solution();
    delete x;
    return 0;
}