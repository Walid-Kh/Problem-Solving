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
            cin >> n;
            map<int, int> rec;
            for (int i = 0; i < n; i++)
            {
                int x;
                cin >> x;
                rec[x] = i;
            }
            map<int, int> arch;
            int mx = -1;
            for (int i = 1; i <= 1000; i++)
                for (int j = 1; j <= 1000; j++)
                    if (rec.find(i) != rec.end() && rec.find(j) != rec.end() && __gcd(i, j) == 1)
                    {
                        mx = max(mx, rec[i] + rec[j] + 2);
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