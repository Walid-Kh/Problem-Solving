#include <bits/stdc++.h>
using namespace std;
void solution()
{
    int n;
    cin >> n;
    priority_queue<int, vector<int>, less<int>> coins;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        sum += x;
        coins.push(x);
    }
    queue<int> coinsAsc;
    while (!coins.empty())
    {
        coinsAsc.push(coins.top());
        coins.pop();
    }
    int res = 0, money = 0;
    while (sum - money >= money)
    {
        res++;
        money += coinsAsc.front();
        coinsAsc.pop();
    }
    cout << res;
}
int main()
{
    solution();
    return 0;
}