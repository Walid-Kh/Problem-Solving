#include <bits/stdc++.h>
using namespace std;
void solution()
{
    int n, k;
    cin >> n >> k;
    string password = "";
    set<char> uniqueLetters;
    for (int i = 0; i < n; i++)
    {
        if (k != 0)
        {
            char x = (char)(97 + (i % 27));
            while (uniqueLetters.find(x) != uniqueLetters.end())
                x = (char)(97 + (i % 27));
            uniqueLetters.insert(x);
            password += x;
            k--;
            continue;
        }
        password += (char)(97 + (i % uniqueLetters.size()));
    }
    cout << password;
}
int main()
{
    solution();
    return 0;
}