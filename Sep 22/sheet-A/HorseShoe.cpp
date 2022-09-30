#include <bits/stdc++.h>
using namespace std;
void solution()
{
    map<long, int> horseshoes;
    int different = 0;
    for (int i = 0; i < 4; i++)
    {
        int x;
        cin >> x;
        if (horseshoes.find(x) == horseshoes.end())
        {
            horseshoes.insert(make_pair(x, 1));
            different++;
        }
        else
        {
            auto y = horseshoes.find(x);
            y->second += 1;
        }
    }
    cout << 4 - different;
}
int main()
{
    solution();
    return 0;
}