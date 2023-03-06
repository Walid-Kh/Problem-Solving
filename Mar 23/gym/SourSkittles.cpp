#include <bits/stdc++.h>
using namespace std;
#define ll long long;
int di[] = {0, 0, 1, -1};
int dj[] = {1, -1, 0, 0};
class Solution
{
public:
    Solution()
    {
        int t;
        int k;
        multiset<int> ski;
        cin >> t >> k;
        string x;
        while (cin >> x)
        {
            if (stoi(x) >= t)
                ski.insert(stoi(x));
        }
        if (ski.size() < k)
        {
            cout << 0;
            return;
        }
        else
        {
            int res = 0;
            auto it = ski.begin();
            for (int i = 0; i < k && it != ski.end(); i++)
            {
                res += *it;
                it++;
            }
            cout << res;
        }
    }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Solution *x = new Solution();
    delete x;
    return 0;
}