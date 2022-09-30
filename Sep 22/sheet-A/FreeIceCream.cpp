#include <bits/stdc++.h>
using namespace std;
void solution()
{
    int n;
    long long iceCreamAvailable;
    cin >> n >> iceCreamAvailable;
    int kidsInDistress = 0;
    for (int i = 0; i < n; i++)
    {
        char sign;
        long d;
        cin >> sign >> d;
        if (sign == '+')
            iceCreamAvailable += d;
        else
        {
            if (d > iceCreamAvailable)
                kidsInDistress++;
            else
                iceCreamAvailable -= d;
        }
    }
    cout << iceCreamAvailable << " " << kidsInDistress;
}
int main()
{
    solution();
    return 0;
}