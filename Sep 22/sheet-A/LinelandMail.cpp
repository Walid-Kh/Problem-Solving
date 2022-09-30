#include <bits/stdc++.h>
using namespace std;
void solution()
{
    int n;
    cin >> n;
    vector<int> x(n);
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    for (int i = 0; i < n; i++)
    {
        int lowest, highest;
        if (i != n - 1 && i != 0)
        {
            lowest = min(abs((x[i]) - (x[i + 1])), abs((x[i] - (x[i - 1]))));
            highest = max(abs((x[i]) - (x[n - 1])), abs((x[i] - (x[0]))));
        }
        else if (i == n - 1)
        {
            lowest = abs((x[i]) - (x[i - 1]));
            highest = abs((x[i]) - (x[0]));
        }
        else
        {
            lowest = abs((x[i]) - (x[i + 1]));
            highest = abs((x[i]) - (x[n - 1]));
        }
        cout << lowest << " " << highest << '\n';
    }
}
int main()
{
    solution();
    return 0;
}