#include <bits/stdc++.h>
using namespace std;
void solution()
{
    int n;
    cin >> n;
    int max;
    vector<pair<int, int>> ratings;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        if (x != y)
            flag = true;
        ratings.push_back(make_pair(x, y));
    }
    if (flag)
        cout << "rated";
    else
    {
        int flag = true;
        int prev = ratings.begin().base()->first;
        for (auto i : ratings)
        {
            if (i.first > prev)
                flag = false;
            prev = i.first;
        }
        if (flag)
            cout << "maybe";
        else
            cout << "unrated";
    }
}
int main()
{
    solution();
    return 0;
}