#include <bits/stdc++.h>
using namespace std;
void solution()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        long long n;
        cin >> n;
        vector<long long> x(n);
        vector<long long> t(n);
        for (auto &a : x)
            cin >> a;
        for (auto &a : t)
            cin >> a;
        long long mn = INT_MAX;
        long long mx = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            long long x1 = x[i] - t[i];
            long long x2 = x[i] + t[i];
            mn = min(mn, x1);
            mx = max(mx, x2);
        }
        cout << fixed << setprecision(10) << (double(mx + mn) / 2.0) << '\n';
    }
}
/* void solve()
{
    int n;
    cin >> n;
    vector<int> x(n);
    vector<int> t(n);
    for (int &a : x)
        cin >> a;
    for (int &a : t)
        cin >> a;
    int mini = INT_MAX, maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        mini = min(mini, x[i] - t[i]);
        maxi = max(maxi, x[i] + t[i]);
    }
    cout << fixed << setprecision(10);
    cout << (double(maxi + mini) / 2.0) << '\n';
} */
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solution();
    return 0;
}