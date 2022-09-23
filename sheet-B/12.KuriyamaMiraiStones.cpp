#include <bits/stdc++.h>
using namespace std;
void solution()
{
    long long n;
    cin >> n;
    vector<long long> stones(n);
    vector<long long> sortedStones(n);
    vector<long long> sumOfStones(n);
    vector<long long> sumOfSortedStones(n);
    long long sum = 0;
    for (long long i = 0; i < n; i++)
    {
        cin >> stones[i];
        sortedStones[i] = stones[i];
        sum += stones[i];
        sumOfStones[i] = sum;
    }
    sort(sortedStones.begin(), sortedStones.end());
    sum = 0;
    for (long long i = 0; i < n; i++)
    {
        sum += sortedStones[i];
        sumOfSortedStones[i] = sum;
    }
    long long m, type, l, r;
    cin >> m;
    vector<long long> answers(m);
    for (long long i = 0; i < m; i++)
    {
        cin >> type >> l >> r;
        if (type == 1)
            answers[i] = sumOfStones[r - 1] - (l - 2 >= 0 ? sumOfStones[l - 2] : 0);
        else
            answers[i] = sumOfSortedStones[r - 1] - (l - 2 >= 0 ? sumOfSortedStones[l - 2] : 0);
    }
    for (auto i : answers)
        cout << i << '\n';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solution();
    return 0;
}