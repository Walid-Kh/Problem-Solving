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
        for (int i = 0; i < t; i++)
        {
            int a, b, c;
            cin >> a >> b >> c;
            int mx = max(a, max(b, c));
            int sum = a + b + c;
            sum -= mx;
            if (mx - sum == 0)
                cout << "YES";
            else
                cout << "NO";
            cout << "\n";
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