#include <bits/stdc++.h>
using namespace std;
void solution()
{
    string x;
    cin >> x;
    int res = 0;
    while (x.size() != 1)
    {
        unsigned long long temp = 0;
        for (int i = 0; i < x.size(); i++)
        {
            temp += x[i] - '0';
        }
        res++;
        x = to_string(temp);
    }
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