#include <bits/stdc++.h>
using namespace std;
void solution()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string x;
        cin >> x;
        string res = "";
        if (is_sorted(x.begin(), x.end()))
            res = x;
        else
        {
            char minNum = '9';
            for (int i = x.size() - 1; i >= 0; i--)
                if (x[i] <= minNum)
                    minNum = x[i];
                else
                    x[i] = min((char)(x[i] + 1), (char)('9'));
            sort(x.begin(), x.end());
            res = x;
        }
        cout << res << '\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solution();
    return 0;
}