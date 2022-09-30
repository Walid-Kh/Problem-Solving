#include <bits/stdc++.h>
using namespace std;
void solution()
{
    int n;
    cin >> n;
    map<string, int> log;
    for (int i = 0; i < n; i++)
    {
        string team;
        cin >> team;
        if (log.find(team) != log.end())
            log[team]++;
        else
            log.insert(make_pair(team, 0));
    }
    pair<string, int> max = *log.begin();
    for (auto i : log)
    {
        if (i.second > max.second)
            max = i;
    }
    cout << max.first;
}
int main()
{
    solution();
    return 0;
}