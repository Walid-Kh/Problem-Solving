#include <bits/stdc++.h>
using namespace std;
int di[] = {0, 0, 1, 1, 1, -1, -1, -1};
int dj[] = {1, -1, 0, 1, -1, 0, 1, -1};
class solution
{

public:
    solution()
    {
        int x0, y0, x1, y1;
        cin >> x0 >> y0 >> x1 >> y1;
        int n;
        cin >> n;
        map<pair<int, int>, bool> allowed;
        for (int i = 0; i < n; i++)
        {
            int r, x, y;
            cin >> r >> x >> y;
            for (int col = x; col <= y; col++)
                allowed[{r, col}] = 1;
        }
        queue<pair<int, int>> q;
        q.push({x0, y0});
        map<pair<int, int>, bool> vis;
        map<pair<int, int>, int> dis;
        dis[{x0, y0}] = 0;
        while (!q.empty())
        {
            int i = q.front().first;
            int j = q.front().second;
            q.pop();
            for (int dir = 0; dir < 8; dir++)
            {
                int childI = i + di[dir];
                int childJ = j + dj[dir];
                if (!vis[{childI, childJ}] && allowed[{childI, childJ}])
                {
                    q.push({childI, childJ});
                    vis[{childI, childJ}] = 1;
                    dis[{childI, childJ}] = dis[{i, j}] + 1;
                }
            }
        }
        if (dis.find({x1, y1}) != dis.end())
            cout << dis[{x1, y1}];
        else
            cout << -1;
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