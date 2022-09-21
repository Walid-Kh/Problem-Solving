#include <bits/stdc++.h>
using namespace std;
void solution()
{
    string qwerty = "qwertyuiopasdfghjkl;zxcvbnm,./";
    char direction;
    string input, res = "";
    cin >> direction >> input;
    for (int i = 0; i < input.size(); i++)
    {
        if (direction == 'R')
        {
            res += qwerty[qwerty.find(input[i]) - 1];
        }
        else
            res += qwerty[qwerty.find(input[i]) + 1];
    }
    cout << res;
}
int main()
{
    solution();
    return 0;
}