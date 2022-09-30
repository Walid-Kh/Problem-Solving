#include <bits/stdc++.h>
using namespace std;
bool condition(int x, int n)
{
    return x < n;
}
class solution
{
    int res = 0;
    string in;
    /* void recAns(int b, int e)
    {
        if (b < 0)
            return;
        if (e >= in.size())
            return;
        if (x.find({b + 1, e + 1}) == x.end())
        {
            x.insert({b + 1, e + 1});
            if (x.find({b, e + 2}) == x.end())
                recAns(b - 1, e + 1);
            if (x.find({b, e + 1}) == x.end())
                recAns(b - 1, e);
            if (x.find({b + 1, e + 2}) == x.end())
                recAns(b, e + 1);
        }
    } */

public:
    solution()
    {
        cin >> in;
        int last;
        int n = in.size();
        for (int i = 0; i < in.size(); i++)
        {
            bool flag = 0;
            for (int j = i + 3; j < n; j++)
            {
                if (in[j] == 'r' && in[j - 1] == 'a' && in[j - 2] == 'e' && in[j - 3] == 'b')
                    flag = 1;
                if (flag)
                    res++;
            }
        }
        cout << res;
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