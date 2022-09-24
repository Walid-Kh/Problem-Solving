#include <bits/stdc++.h>
using namespace std;
void solution()
{
    int n, m, k, t;
    cin >> n >> m >> k >> t;
    string answers[] = {"Carrots", "Kiwis", "Grapes"};
    set<pair<int, int>> wasted;
    for (int index = 0; index < k; index++)
    {
        int i, j;
        cin >> --i >> j;
        wasted.insert(make_pair(--i, --j));
    }
    for (int a = 0; a < t; a++)
    {
        int i, j;
        cin >> i >> j;
        if (wasted.find(make_pair(--i, --j)) != wasted.end())
        {
            cout << "Waste"
                 << "\n";
        }
        else
        {
            int w = 0;
            for (auto tile : wasted)
            {
                if ((i * m + j) >= (tile.first * m + tile.second))
                    w++;
                else
                    break;
            }
            cout << answers[((i * m + j) - w) % 3] << "\n";
        }
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