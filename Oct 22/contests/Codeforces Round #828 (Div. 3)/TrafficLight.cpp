#include <bits/stdc++.h>
using namespace std;
int di[] = {0, 0, 1, -1};
int dj[] = {1, -1, 0, 0};
class solution
{
public:
    solution()
    {
        int t;
        cin >> t;
        while (t--)
        {
            int n;
            char on;
            string traffic;
            cin >> n >> on >> traffic;
            if (on == 'g')
            {
                cout << 0 << '\n';
                continue;
            }
            map<char, set<int>> rec;
            for (int i = 0; i < n; i++)
            {
                if (traffic[i] == on)
                    rec[on].insert(i);
                else if (traffic[i] == 'g')
                    rec['g'].insert(i);
            }
            int mx = INT_MIN;
            for (auto i : rec[on])
            {
                int back = (*rec['g'].rbegin());
                if (i > back)
                    mx = max(mx, (n - i - 1) + (*rec['g'].begin()) + 1);
                else
                    for (auto j : rec['g'])
                        if (j > i)
                        {
                            mx = max(mx, j - i);
                            break;
                        }
            }
            cout << mx << '\n';
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