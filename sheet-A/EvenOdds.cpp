#include <bits/stdc++.h>
using namespace std;
void solution()
{
    long long n, k;
    cin >> n >> k;
    long long middle = n % 2 ? n / 2 + 1 : n / 2;
    if (k > middle)
        cout << (k - middle) * 2;
    else
        cout << k * 2 - 1;
}
int main()
{
    solution();
    return 0;
}