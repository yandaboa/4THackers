#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int p;
        cin >> p;
        int rp = p / 2;
        for (int j = 0; j < rp + 1; j++)
        {
            cout << "|";
        }
        for (int j = 0; j < 50 - rp; j++)
        {
            cout << " ";
        }
        cout << "|" << endl;
    }
}