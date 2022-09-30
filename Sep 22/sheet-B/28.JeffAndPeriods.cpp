#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    solution()
    {
        int n;
        cin >> n;
        map<int, int> ans;
        map<int, pair<int, int>> record;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (record.find(x) != record.end())
            {
                if (record[x].second == -1)
                {
                    record[x] = {record[x].first, i};
                    ans[x] = i - record[x].first;
                }
                else
                {
                    if (ans[x] != i - record[x].second)
                        ans.erase(x);
                    else
                        record[x] = {record[x].second, i};
                }
            }
            else
            {
                ans[x] = 0;
                record[x] = {i, -1};
            }
        }
        cout << ans.size() << '\n';
        if (ans.size())
            for (auto i : ans)
            {
                cout << i.first << " " << i.second << '\n';
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