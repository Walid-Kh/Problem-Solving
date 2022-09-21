#include <bits/stdc++.h>
using namespace std;
void solution()
{
    string input;
    cin >> input;
    int ones = 0, twos = 0, threes = 0;
    for (char i : input)
    {
        switch (i)
        {
        case '1':
            ones++;
            break;
        case '2':
            twos++;
            break;
        case '3':
            threes++;
            break;
        default:
            break;
        }
    }
    string output;
    while (ones || twos || threes)
    {
        if (ones)
        {
            output += "1+";
            ones--;
        }
        else if (twos)
        {
            output += "2+";
            twos--;
        }
        else if (threes)
        {
            output += "3+";
            threes--;
        }
    }
    if (output[output.size() - 1] == '+')
        output.erase(output.end() - 1);
    cout << output;
}
int main()
{
    solution();
    return 0;
}