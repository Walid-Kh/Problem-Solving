#include <bits/stdc++.h>
using namespace std;
int di[] = {0, 0, 1, -1};
int dj[] = {1, -1, 0, 0};
class solution
{
public:
    solution()
    {
        string s, t;
        cin >> s >> t;
        multiset<char> sSet;
        string res = "";
        for (auto i : s)
            sSet.insert(i);
        for (auto i : t)
        {
            auto f = sSet.find(i);
            if (f != sSet.end())
                sSet.erase(f);
            else
                res = "need tree";
        }
        if (res == "")
        {
            if (sSet.size() == 0)
                res = "array";
            if (res == "")
            {
                int j = 0;
                for (int i = 0; i < s.size(); i++)
                    if (s[i] == t[j])
                        j++;
                if (j == t.size())
                    res = "automaton";
                else
                    res = "both";
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