#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    solution()
    {
        int n;
        long long res = 1;
        cin >> n;
        vector<int> bar(n);
        bool flag = 0;
        for (auto &i : bar)
        {
            cin >> i;
            if (i == 1)
                flag = 1;
        }
        if (!flag)
        {
            cout << 0;
            return;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (bar[i] == 1)
                    for (int j = i + 1; j < n; j++)
                    {
                        if (bar[j] == 1)
                        {
                            res *= j - i;
                            break;
                        }
                    }
            }
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