#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    solution()
    {
        int xa, ya, xb, yb;
        set<pair<int, int>> generals;
        cin >> xa >> ya >> xb >> yb;
        for (int i = min(xa, xb); i <= max(xa, xb); i++)
        {
            generals.insert({i, max(ya, yb)});
            generals.insert({i, min(ya, yb)});
        }
        for (int i = min(ya, yb); i <= max(ya, yb); i++)
        {
            generals.insert({max(xa, xb), i});
            generals.insert({min(xa, xb), i});
        }
        int g;
        cin >> g;
        // coordinates and radii
        map<pair<int, int>, int> gs;
        for (int i = 0; i < g; i++)
        {
            int x, y, r;
            cin >> x >> y >> r;
            if (gs.find({x, y}) != gs.end())
                gs[{x, y}] = max(r, gs[{x, y}]);
            gs[{x, y}] = r;
        }
        int res = 0;
        for (auto i : generals)
        {
            bool flag = 0;
            for (auto j : gs)
            {
                double dis = sqrt(pow(i.first - j.first.first, 2) + pow(i.second - j.first.second, 2));
                if (dis <= (double)j.second)
                {
                    flag = 1;
                    break;
                }
            }
            if (!flag)
                res++;
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