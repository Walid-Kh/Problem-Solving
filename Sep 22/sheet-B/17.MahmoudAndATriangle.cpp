#include <bits/stdc++.h>
using namespace std;
void solution()
{
    int n;
    cin >> n;
    vector<int> sides(n);
    for (auto &i : sides)
        cin >> i;
    sort(sides.begin(), sides.end());
    bool flag = 0;
    for (int i = 0; i < n; i++)
    {
        bool i1 = i + 1 < n;
        bool i2 = i + 2 < n;
        if (i1 && i2 && !(sides[i] + sides[i + 1] <= sides[i + 2]))
            flag = 1;
    }
    if (flag)
        cout << "YES";
    else
        cout << "NO";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solution();
    return 0;
}