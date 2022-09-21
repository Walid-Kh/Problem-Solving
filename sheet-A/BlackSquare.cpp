#include <bits/stdc++.h>
using namespace std;
void solution()
{
    int calories[4];
    string game;
    int res = 0;
    for (int i = 0; i < 4; i++)
        cin >> calories[i];
    cin >> game;
    for (auto i : game)
    {
        res += calories[i - '0' - 1];
    }
    cout << res;
}
int main()
{
    solution();
    return 0;
}