#include <bits/stdc++.h>
using namespace std;
void solution()
{
    int n;
    cin >> n;
    int p, q;
    set<int> x, y;
    cin >> p;
    for (int i = 0; i < p; i++)
    {
        int level;
        cin >> level;
        x.insert(level);
    }
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int level;
        cin >> level;
        y.insert(level);
    }
    int flag = true;
    for (int i = 1; i <= n; i++)
    {
        if (x.find(i) == x.end() && y.find(i) == y.end())
        {
            flag = false;
            break;
        }
    }
    if (flag)
        cout << "I become the guy.";
    else
        cout << "Oh, my keyboard!";
}
int main()
{
    solution();
    return 0;
}