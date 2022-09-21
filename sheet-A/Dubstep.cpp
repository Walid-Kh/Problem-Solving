#include <bits/stdc++.h>
using namespace std;
void solution()
{
    string in, res;
    cin >> in;
    for (int i = 0; i < in.size();)
    {
        bool x = in[i] == 'W' && in[i + 1] == 'U' && in[i + 2] == 'B';
        if (x)
        {
            i += 3;
        }
        else
        {
            while (!x && i < in.size())
            {
                res += in[i];
                i++;
                x = in[i] == 'W' && in[i + 1] == 'U' && in[i + 2] == 'B' ;
            }
            res += " ";
        }
    }
    cout << res;
}
int main()
{
    solution();
    return 0;
}