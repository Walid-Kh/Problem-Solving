#include <bits/stdc++.h>
using namespace std;
void solution()
{
    map<char, int> coins;
    coins.insert(make_pair('A', 0));
    coins.insert(make_pair('B', 0));
    coins.insert(make_pair('C', 0));
    for (int i = 0; i < 3; i++)
    {
        string x;
        cin >> x;
        if (x[1] == '<')
            coins[x[2]]++;
        else
            coins[x[0]]++;
    }
    priority_queue<pair<int, char>> q;
    for (auto i : coins)
        q.push(make_pair(i.second, i.first));
    int prev = -1;
    string res = "";
    while (!q.empty())
    {
        res += q.top().second;
        if (prev == q.top().first)
        {
            res = "Impossible";
            break;
        }
        prev = q.top().first;
        q.pop();
    }
    if (res != "Impossible")
        reverse(res.begin(), res.end());
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