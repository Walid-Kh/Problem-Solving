#include <bits/stdc++.h>
using namespace std;
void solution()
{
    int n;
    cin >> n;
    string in;
    cin >> in;
    map<char, bool> chars;
    for (char i = 'a'; i <= 'z'; i++)
        chars.insert(make_pair(i, false));
    for (int i = 0; i < n; i++)
    {
        chars[tolower(in[i])] = true;
    }
    bool res = true;
    for (auto i : chars)
    {
        res = res & i.second;
    }
    if (res)
        cout << "YES";
    else
        cout << "NO";
}
int main()
{
    solution();
    return 0;
}