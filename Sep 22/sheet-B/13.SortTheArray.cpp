#include <bits/stdc++.h>
using namespace std;
void solution()
{
    int n;
    cin >> n;
    vector<int> numbers(n);
    for (int i = 0; i < n; i++)
        cin >> numbers[i];
    int prev = 0, mi = -1, mx = -1;
    for (int i = 1; i < n; i++)
    {
        if (numbers[prev] > numbers[i])
        {
            if (mx == -1)
                mx = prev;
            mi = i;
        }
        prev = i;
    }
    reverse(numbers.begin() + min(mi, mx), numbers.begin() + (max(mi, mx) > 0 ? max(mi, mx) + 1 : 0));
    bool sorted = true;
    prev = 0;
    for (int i = 0; i < n; i++)
    {
        if (numbers[i] < numbers[prev])
            sorted = 0;
        if (!sorted)
            break;
        prev = i;
    }
    if (sorted)
        cout << "yes"
             << "\n"
             << (mx == -1? 1 : mx+ 1) << ' ' << (mi == -1 ? 1 : mi + 1);
    else
        cout << "no";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solution();
    return 0;
}