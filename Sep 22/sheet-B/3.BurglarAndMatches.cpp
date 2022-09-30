#include <bits/stdc++.h>
using namespace std;
void solution()
{
    int n, m;
    cin >> n >> m;
    priority_queue<pair<int, int>> containers;
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        containers.push(make_pair(b, a));
    }
    int res = 0;
    for (int i = n; i > 0 && containers.size();)
    {
        int x = containers.top().second;
        while (x && i != 0)
        {
            res += containers.top().first;
            i--;
            x--;
        }
        containers.pop();
    }
    cout << res;
}
int main()
{
    solution();
    return 0;
}