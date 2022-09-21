#include <bits/stdc++.h>
using namespace std;
void solution()
{
    int n;
    cin >> n;
    vector<string> words(n);
    for (int i = 0; i < n; i++)
        cin >> words[i];
    vector<string> res(n);
    for (int i = 0; i < n; i++)
    {
        string output = "";
        if (words[i].length() <= 10)
            output = words[i];
        else
        {
            output += words[i][0];
            output += to_string(words[i].length() - 2);
            output += words[i][words[i].length() - 1];
        }
        res[i] = output;
    }
    for (int i = 0; i < n; i++)
    {
        cout << res[i] << "\n";
    }
}
int main()
{
    solution();
    return 0;
}