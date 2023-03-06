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
        string x;
        cin >> x;
        unsigned long long res = 0;
        for (auto i : x)
            if (i == '1')
                res++;
        cout << res;
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