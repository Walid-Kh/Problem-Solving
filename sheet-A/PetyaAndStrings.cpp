#include <bits/stdc++.h>
using std::cin;
using std::cout;
using std::string;
#define settings                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
int solution()
{
    string input[2];
    cin >> input[0] >> input[1];
    for (int i = 0; i < input[0].length(); i++)
    {
        input[0][i] = tolower(input[0][i]);
        input[1][i] = tolower(input[1][i]); 
    }
    if (input[0] < input[1])
        return -1;
    else if (input[0] == input[1])
        return 0;
    else
        return 1;
}

int main()
{
    std::settings
                   cout
               << solution();
    return 0;
}