#include <bits/stdc++.h>
using namespace std;
class solution
{
    map<int, int> res;
    string commands, dirs;
    int probabilities = 0;
    void recAns(int i = 0, int ans = 0)
    {
        if (i == dirs.size())
        {
            if (res.find(ans) == res.end())
                res[ans] = 1;
            else
                res[ans]++;
            probabilities++;
            return;
        }
        if (dirs[i] == '+')
            recAns(i + 1, ans + 1);
        else if (dirs[i] == '-')
            recAns(i + 1, ans - 1);
        else
        {
            recAns(i + 1, ans + 1);
            recAns(i + 1, ans - 1);
        }
    }

public:
    solution()
    {
        cin >> commands >> dirs;
        int finPosition = 0;
        for (auto i : commands)
            if (i == '+')
                finPosition++;
            else
                finPosition--;
        recAns();
        cout.precision(10);
        if (res.find(finPosition) == res.end())
            cout << 0;
        else
            cout << (double)res[finPosition] / probabilities;
    }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solution *x = new solution();
    delete x;
    return 0;
}