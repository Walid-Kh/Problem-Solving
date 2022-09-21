#include <bits/stdc++.h>
using namespace std;
void solution()
{
    int n;
    cin >> n;
    if (n > 0)
    {
        int prev, curr;
        cin >> prev;
        int count = 1;
        for (int i = 0; i < n - 1; i++)
        {
            cin >> curr;
            if (prev != curr)
                count++;
            prev = curr;
        }
        cout << count;
    }
    else
        cout << 0;
}
int main()
{
    solution();
    return 0;
}