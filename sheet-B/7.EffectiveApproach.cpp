#include <bits/stdc++.h>
using namespace std;
void solution()
{
    int N = 1e5 + 1, m, n;
    cin >> n;
    vector<int> elements(N);
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        elements[num] = i + 1;
    }
    cin >> m;
    long long res0 = 0, res1 = 0;
    for (int i = 0; i < m; i++)
    {
        int num;
        cin >> num;
        res0 += elements[num];
        res1 += n - elements[num] + 1;
    }

    cout << res0 << " " << res1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solution();
    return 0;
}