#include <bits/stdc++.h>
using namespace std;
#define ll long long;
int di[] = {0, 0, 1, -1};
int dj[] = {1, -1, 0, 0};
class Solution
{
    bool containsDuplicate(vector<int> &nums)
    {
        set<int> numsSet;
        for (auto &i : nums)
        {
            if (numsSet.find(i) != numsSet.end())
                return 1;
            else
                numsSet.insert(i);
        }
        return 0;
    }

public:
    Solution()
    {
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