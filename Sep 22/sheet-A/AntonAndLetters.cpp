#include <bits/stdc++.h>
using namespace std;
void solution()
{
    string input;
    getline(cin, input);
    set<char> uniqueChars;
    for (auto i : input)
    {
        if (i == '{' || i == '}' || i == ' ' || i == ',')
            continue;
        uniqueChars.insert(i);
    }
    cout << uniqueChars.size();
}
int main()
{
    solution();
    return 0;
}