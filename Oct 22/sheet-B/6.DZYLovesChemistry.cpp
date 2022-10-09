#include <bits/stdc++.h>
using namespace std;
vector<vector<bool>> adjMat(51, vector<bool>(51));
class solution
{
    unsigned long long res = 1;
    set<int> vis;
    void dfs(int i, int n, int m)
    {
        if (vis.find(i) != vis.end())
            return;
        vis.insert(i);
        for (int j = 1; j <= n; j++)
        {
            if (adjMat[i][j] == 1 && vis.find(j) == vis.end())
            {
                res *= 2;
                dfs(j, n, m);
            }
        }
    }

public:
    solution()
    {
        int n, m;
        cin >> n >> m;
        for (int i = 0; i < m; i++)
        {
            int x, y;
            cin >> x >> y;
            adjMat[x][y] = 1;
            adjMat[y][x] = 1;
        }
        for (int i = 1; i < n; i++)
        {
            dfs(i, n, m);
        }
        cout << res;
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