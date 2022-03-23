#include <bits/stdc++.h>

using namespace std;

int main()
{
    int v;
    cin >> v;
    int d = 7;
    int count = 0;
    for (int i = 0; i < 7; i++)
    {
        int t;
        cin >> t;
        if (t * d > v)
        {
            count++;
        }
        d--;
    }
    cout << count;
}
