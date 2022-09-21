#include <bits/stdc++.h>
using namespace std;
void solution()
{
    int n;
    cin >> n;
    vector<int> lines(n);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        lines[i] = x;
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        x -= 1;
        if (x - 1 != -1)
        {
            lines[x - 1] += (y - 1);
        }
        if (x + 1 < n)
        {
            lines[x + 1] += lines[x] - y;
        }
        lines[x] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        cout << lines[i] << '\n';
    }
}
int main()
{
    solution();
    return 0;
}
