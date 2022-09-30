#include <bits/stdc++.h>
using namespace std;
void solution()
{
    int n, f;
    cin >> n >> f;
    vector<int> products(n);
    vector<int> customers(n);
    for (int i = 0; i < n; i++)
        cin >> products[i] >> customers[i];
    // abs(products available - customers ) , index
    priority_queue<pair<int, int>> validDays;
    for (int i = 0; i < n; i++)
        if (products[i] > 0 && customers[i] - products[i] > 0)
            validDays.push(make_pair(min(2 * products[i], customers[i]) - min(products[i], customers[i]), i));
    while (f && !validDays.empty())
    {
        products[validDays.top().second] *= 2;
        validDays.pop();
        f--;
    }
    long long res = 0;
    for (int i = 0; i < n; i++)
        res += min(products[i], customers[i]);
    cout << res;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solution();
    return 0;
}