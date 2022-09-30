#include <bits/stdc++.h>
using namespace std;
string repeat(string x, int y)
{
    string res = "";
    for (int i = 0; i < y; i++)
        res += x;
    return res;
}
void solution()
{
    int n, t;
    cin >> n >> t;
    if (t == 10 && n == 1)
        cout << -1;
    else
    {
        if (t == 10)
            cout << (to_string(t) + repeat("0", n - 2));
        else
            cout << (to_string(t) + repeat("0", n - 1));
    }
}
int main()
{
    solution();
    return 0;
}