#include <bits/stdc++.h>
using namespace std;
#define ll long long;
int di[] = {0, 0, 1, -1};
int dj[] = {1, -1, 0, 0};
class Solution
{
    int coinChange(vector<int> &coins, int amount)
    {
        vector<int> rec(amount + 1, INT_MAX);
        rec[0] = 0;
        for (auto i : coins)
            if (i <= amount)
                rec[i] = 1;
        for (int i = 1; i <= amount; i++)
        {
            int curRes = INT_MAX;
            for (int j = 0; j < coins.size(); j++)
            {
                if (i - coins[j] < 0)
                    continue;
                else if (rec[i - coins[j]] != INT_MAX)
                    curRes = min(curRes, rec[i - coins[j]] + 1);
            }
            rec[i] = curRes;
        }
        return rec[amount] != INT_MAX ? rec[amount] : -1;
    }

public:
    Solution()
    {
        vector<int> coins = {2};
        int amount = 3;
        cout << coinChange(coins, amount);
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