#include <bits/stdc++.h>
using namespace std;
void solution()
{
    int n;
    cin >> n;
    int *cards = new int[n];
    for (int i = 0; i < n; i++)
        cin >> cards[i];
    int Sereja = 0, Dima = 0;
    int begin = 0;
    int end = n - 1;
    for (int i = 0; i < n || begin == end; i++)
    {
        int max = 0;
        if (cards[begin] >= cards[end])
        {
            max = cards[begin];
            begin += 1;
        }
        else
        {
            max = cards[end];
            end -= 1;
        }
        if (i % 2 == 0)
        {
            Sereja += max;
        }
        else
        {
            Dima += max;
        }
    }
    cout << Sereja << " " << Dima;
    delete[] cards;
}
int main()
{
    solution();
    return 0;
}