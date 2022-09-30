#include <bits/stdc++.h>
using namespace std;
void solution()
{
    int n;
    cin >> n;
    char *stones = new char[n - 1];
    char prev;
    cin >> prev;
    int ans = 0;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> stones[i];
        if (stones[i] == prev)
            ans++;
        else
            prev = stones[i];
    }
    cout << ans;
}
int main()
{
    solution();
    return 0;
}