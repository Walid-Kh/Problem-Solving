#include <bits/stdc++.h>
using namespace std;
void solution()
{
    int n;
    cin >> n;
    int policeCount = 0, crimesUntreated = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x > 0)
            policeCount += x;
        else
            policeCount > 0 ? policeCount-- : crimesUntreated++;
    }
    cout << abs(crimesUntreated);
}
int main()
{
    solution();
    return 0;
}