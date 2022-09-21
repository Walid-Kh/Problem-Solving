#include <bits/stdc++.h>
using namespace std;
void solution()
{

    string input = "";
    string output = "";
    cin >> input;
    int lower = 0, upper = 0;
    for (auto i : input)
    {
        if (isupper(i))
            upper++;
        else
            lower++;
    }
    if (upper > lower)
        for (auto i : input)
            output += toupper(i);
    else
        for (auto i : input)
            output += tolower(i);
    cout << output;
}
int main()
{
    solution();
    return 0;
}