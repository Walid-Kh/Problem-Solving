#include <bits/stdc++.h>
using namespace std;
void solution()
{
    int n, t, k, d;
    cin >> n >> t >> k >> d;
    int res0 = 0, n0 = n;
    int tnode = 0;
    while (n0 > 0)
    {
        n0 -= k;
        res0 += t;
    }
    int n1 = n, res1 = 0, t0 = t, t1 = d;
    for (res1 = 0; n1 > 0; res1++)
    {
        if (t0 == res1)
        {
            n1 -= k;
            t0 += t;
        }
        if (n1 <= 0)
            break;
        if (t1 == res1)
        {
            n1 -= k;
            t1 += t;
        }
    }
    res1 = min(t0, t1);
    res0 > res1 ? cout << "YES"
                : cout << "NO";
}
int main()
{
    solution();
    return 0;
}