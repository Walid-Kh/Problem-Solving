#include <bits/stdc++.h>
using namespace std;
#define ui unsigned int;
class solution
{
public:
    solution()
    {
        int n, m, x, y, k;
        cin >> n >> m >> x >> y >> k;
        vector<pair<int, int>> vec(k);
        for (auto &i : vec)
            cin >> i.first >> i.second;
        pair<int, int> curr = {x, y};
        int res = 0;
        for (auto i : vec)
            while (curr.first + i.first > 0 && curr.first + i.first <= n && curr.second + i.second > 0 && curr.second + i.second <= m)
            {
                curr.first += i.first;
                curr.second += i.second;
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