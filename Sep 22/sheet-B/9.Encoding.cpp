#include <bits/stdc++.h>
using namespace std;
void solution()
{
    int n;
    cin >> n;
    string x;
    vector<char> res(n);
    cin >> x;
    for (int i = 0; i < n; i++)
    {
        if (i % 2)
            res[(n / 2) - ceil(i / 2.0f)] = x[i];
        else
            res[(n / 2) + ceil(i / 2.0f)] = x[i];
    }
    string y = "";
    for (auto i : res)
        y += i;
    if (n % 2 == 0)
        reverse(y.begin(), y.end());
    cout << y;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solution();
    return 0;
}