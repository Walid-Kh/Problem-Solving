#include <bits/stdc++.h>
using namespace std;
void solution()
{
    int n;
    cin >> n;
    bool flag = 1;
    set<char> chars;
    for (int i = 0; i < n; i++)
    {
        string in;
        cin >> in;
        if (in[i] != in[n - 1 - i])
            flag = 0;
        for (int j = 0; j < n; j++)
        {
            if ((j != i && j != n - 1 - i) && in[j] == in[i])
                flag = false;
            chars.insert(in[j]);
        }
        if (chars.size() > 2)
            flag = 0;
    }
    flag ? cout << "YES" : cout << "NO";
}
int main()
{
    solution();
    return 0;
}