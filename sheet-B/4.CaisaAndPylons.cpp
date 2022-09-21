#include <bits/stdc++.h>
using namespace std;
void solution()
{
    int n;
    cin >> n;
    vector<int> towers(n + 1);
    towers[0] = 0;
    int res = 0, energy = 0;
    for (int i = 1; i <= n; i++)
        cin >> towers[i];
    for (int i = 0; i < n; i++)
    {
        while (energy < towers[i + 1] - towers[i])
        {
            res++;
            towers[i]++;
        }
        if ((towers[i] - towers[i + 1] >= 0) ||
            (towers[i] - towers[i + 1] < 0 && -(towers[i] - towers[i + 1]) <= energy))
            energy += towers[i] - towers[i + 1];
    }
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