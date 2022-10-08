#include <bits/stdc++.h>
using namespace std;
class solution
{
    map<int, int> rec;
    map<int, bool> vis;
    queue<int> q;
    int bfs(int n, int m)
    {
        int x;
        while (x != m)
        {
            x = q.front();
            q.pop();
            if (vis[x] == true || x > 10000 || x < 0)
                continue;
            vis[x] = true;
            q.push(x * 2);
            q.push(x - 1);
            rec[x * 2] = min(rec[x] + 1, rec.find(x * 2) != rec.end() ? rec[x * 2] : INT_MAX);
            rec[x - 1] = min(rec[x] + 1, rec.find(x - 1) != rec.end() ? rec[x - 1] : INT_MAX);
        }
        return rec[x];
    }

public:
    solution()
    {
        int n, m;
        cin >> n >> m;
        q.push(n);
        rec[n] = 0;
        cout << bfs(n, m);
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