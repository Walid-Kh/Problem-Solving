#include <bits/stdc++.h>
using namespace std;
#define ll long long;
int di[] = {0, 0, 1, -1};
int dj[] = {1, -1, 0, 0};
class Solution
{
    unordered_map<int, int> rec;
    int climbStairs(int n)
    {
        if (n == 0 || n == 1)
            return 1;
        else if (n < 0)
            return 0;
        else if (rec.find(n) != rec.end())
            return rec[n];
        else
            return rec[n] = climbStairs(n - 1) + climbStairs(n - 2);
    }

public:
    Solution()
    {
        climbStairs(2);
        cout << rec[2];
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