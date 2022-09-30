#include <bits/stdc++.h>
using namespace std;
void solution()
{
    string input = "";
    cin >> input;
    set<char> characters;
    for (int i = 0; i < input.length(); i++)
    {
        characters.insert(input[i]);
    }
    if (characters.size() % 2)
        cout << "IGNORE HIM!";
    else
        cout << "CHAT WITH HER!";
}
int main()
{
    solution();
    return 0;
}