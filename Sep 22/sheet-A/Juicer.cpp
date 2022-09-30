#include <bits/stdc++.h>
using namespace std;
void solution()
{
    int n, b, d;
    cin >> n >> b >> d;
    int trash = 0;
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x > b)
            continue;
        trash += x;
        if (trash > d)
        {
            trash = 0;
            res++;
        }
    }
    if (trash > d)
    {
        trash = 0;
        res++;
    }
    cout << res;
}
int main()
{
    solution();
    return 0;
}