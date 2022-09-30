#include <bits/stdc++.h>
using namespace std;
void solution()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    int max = nums[0], min = nums[0];
    for (int i = 0; i < n; i++)
    {
        if (nums[i] > max)
            max = nums[i];
        else if (nums[i] < min)
            min = nums[i];
    }
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] < max && nums[i] > min)
            res++;
    }
    cout << res;
}
int main()
{
    solution();
    return 0;
}