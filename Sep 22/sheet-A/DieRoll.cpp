#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    else if (b == 0)
        return a;
    else
    {
        if (a > b)
            return gcd(a % b, b);
        else
            return gcd(a, b % a);
    }
}
void solution()
{
    int y, w;
    cin >> y >> w;
    int minRoll = max(y, w);
    int A = 0;
    for (int i = minRoll; i <= 6; i++)
        A++;
    cout << A / gcd(A, 6) << "/" << 6 / gcd(A, 6);
}
int main()
{
    solution();
    return 0;
}
