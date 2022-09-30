#include <bits/stdc++.h>
using namespace std;
// https://cses.fi/problemset/task/1192/
int di[] = {0, 0, 1, -1};
int dj[] = {1, -1, 0, 0};
bool vis[1001][1001];
char matrix[1001][1001];
int n, m;
void dfs(int i, int j)
{
    vis[i][j] = 1;
    for (int dir = 0; dir < 4; dir++)
    {
        int childI = i + di[dir];
        int childJ = j + dj[dir];

        if (childI < n && childI >= 0 && childJ < m && childJ >= 0
        && !vis[childI][childJ] && matrix[childI][childJ] == '.')
            dfs(childI, childJ);
    }
}
void solution()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
            vis[i][j] = 0;
        }
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!vis[i][j] && matrix[i][j] == '.')
            {
                dfs(i, j);
                res++;
            }
        }
    }
    cout << res;
}
int main()
{
    solution();
    return 0;
}