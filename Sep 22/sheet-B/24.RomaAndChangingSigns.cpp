#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    solution()
    {
        int n, k;
        cin >> n >> k;
        priority_queue<int, vector<int>, greater<int>> q;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            q.push(x);
        }
        while (k)
        {
            int x = -q.top();
            q.pop();
            q.push(x);
            k--;
        }
        int sum = 0;
        while (q.size())
        {
            sum += q.top();
            q.pop();
        }
        cout << sum;
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