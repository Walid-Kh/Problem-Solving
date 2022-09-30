#include <bits/stdc++.h>
using namespace std;
// red, orange, yellow, green, blue, indigo or violet.
void solution()
{
    string colors = "ROYGBIV";
    string additions[] = {"", "G", "GB", "YGB", "YGBI", "OYGBI", "OYGBIV"};
    int n;
    cin >> n;
    string res = "";
    for (int i = 0; i < n / 7; i++)
        res += colors;
    res += additions[n % 7];
    cout << res;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solution();
    return 0;
}