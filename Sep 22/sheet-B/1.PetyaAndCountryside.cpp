#include <bits/stdc++.h>
using namespace std;
void solution()
{
    int n;
    cin >> n;
    vector<int> garden(n);
    for (int i = 0; i < n; i++)
        cin >> garden[i];
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        int score = 0, height = garden[i];
        for (int j = i; j < n && garden[j] <= height; j++)
        {
            score++;
            height = garden[j];
        }
        height = garden[i];
        for (int j = i - 1; j >= 0 && garden[j] <= height; j--)
        {
            score++;
            height = garden[j];
        }
        if (score > max)
            max = score;
    }
    cout << max;
}
int main()
{
    solution();
    return 0;
}