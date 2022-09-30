#include <bits/stdc++.h>
using namespace std;
bool condition(int i, int n)
{
    return i <= n && i > 0;
}
class solution
{
public:
    solution()
    {
        int t;
        cin >> t;
        for (int i = 0; i < t; i++)
        {
            int n, m;
            cin >> n >> m;
            int di[] = {-2, -1, 1, 2, 2, 1, -1, -2};
            int dj[] = {1, 2, 2, 1, -1, -2, -2, -1};
            pair<int, int> ans = {-1, -1};
            bool found = 0;
            for (int i = 1; i <= n; i++)
            {
                for (int j = 1; j <= m; j++)
                {
                    found = 0;
                    for (int dir = 0; dir < 8; dir++)
                    {
                        if (!condition(i + di[dir], n) || !condition(j + dj[dir], m))
                        {
                            found = 1;
                            ans = {i, j};
                        }
                        else
                        {
                            found = 0;
                            ans = {-1, -1};
                            break;
                        }
                    }
                    if (found)
                        break;
                }
                if (found)
                    break;
            }
            if (ans == make_pair(-1, -1))
            {
                cout << n / 2 << " " << m / 2;
            }
            else
                cout << ans.first << " " << ans.second;
            cout << '\n';
        }
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