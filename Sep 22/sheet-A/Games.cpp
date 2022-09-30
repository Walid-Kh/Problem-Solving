#include <bits/stdc++.h>
using namespace std;
void solution()
{
    int n;
    cin >> n;
    vector<int> host(n), guest(n);
    for (int i = 0; i < n; i++)
    {
        cin >> host[i] >> guest[i];
    }
    int res = 0;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n ; j++)
            if (i != j && host[i] == guest[j])
                res++;
    cout << res;
}
int main()
{
    solution();
    return 0;
}