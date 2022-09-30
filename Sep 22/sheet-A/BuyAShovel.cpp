#include <bits/stdc++.h>
using namespace std;
void solution()
{
    int shovelPrice, change;
    cin >> shovelPrice >> change;
    int min = 1;

    for (int i = 1; i < 10; i++)
    {
        bool flag = false;
        if (((shovelPrice * i) % 10) == change || ((shovelPrice * i) % 10) == 0)
        {
            min = i;
            flag = true;
        }
        if (flag)
            break;
    }
    cout << min;
}
int main()
{
    solution();
    return 0;
}