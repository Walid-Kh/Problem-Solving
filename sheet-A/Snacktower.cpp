#include <bits/stdc++.h>
using namespace std;
void solution()
{
    int n;

    cin >> n;
    map<int, int> snacks;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        snacks.insert(make_pair(x, i + 1));
    }
    int day = 1;
    for (int i = n; i >= 1;)
    {
        while (i > 0 && snacks.at(i) <= day)
        {
            cout << i << " ";
            i--;
        }
        day++;
        cout << '\n';
    }
}
int main()
{
    solution();
    return 0;
}