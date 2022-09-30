#include <bits/stdc++.h>
using namespace std;
void solution()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, c;
        cin >> n >> c;
        map<int, int> planets;
        for (int i = 0; i < n; i++)
        {
            int ai;
            cin >> ai;
            if (planets.find(ai) == planets.end())
                planets[ai] = 1;
            else
                planets[ai] += 1;
        }
        int res = 0;
        for (auto i : planets)
            res += min(i.second, c);
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