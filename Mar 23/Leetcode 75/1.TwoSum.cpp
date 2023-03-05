#include <bits/stdc++.h>
using namespace std;
#define ll long long;
int di[] = {0, 0, 1, -1};
int dj[] = {1, -1, 0, 0};
class Solution
{
    vector<int> twoSum(vector<int> &nums, int target)
    {
        map<int, set<int>> numsLocationMap;
        vector<int> res(2, 0);
        for (int i = 0; i < nums.size(); i++)
            numsLocationMap[nums[i]].insert(i);
        for (auto i : numsLocationMap)
        {
            int number = i.first;
            set<int> Set = i.second;
            if ((target - number) == number && Set.size() < 2)
                continue;
            else if ((target - number) == number && Set.size() >= 2)
            {
                res = {*Set.begin(), *(Set.rbegin())};
                break;
            }
            else if (numsLocationMap.find((target - number)) != numsLocationMap.end())
            {
                res = {*Set.begin(), *numsLocationMap[target - number].begin()};
                break;
            }
        }
        return res;
    }

public:
    Solution()
    {
        vector<int> nums = {-1, -2, -3, -4, -5};
        int target = -8;
        vector<int> res = twoSum(nums, target);
        for (auto i : res)
            cout << i << " ";
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