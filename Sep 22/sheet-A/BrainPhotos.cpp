#include <bits/stdc++.h>
using namespace std;
void solution()
{
    int x, y;
    cin >> x >> y;
    bool flag = true;
    for (int i = 0; i < x * y; i++)
    {
        char color;
        cin >> color;
        if (color != 'W' && color != 'B' && color != 'G')
            flag = 0;
    }
    flag ? cout << "#Black&White" : cout << "#Color";
}
int main()
{
    solution();
    return 0;
}