#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int m = 0;
        for (int j = 0; j < 5; j++)
        {
            int temp;
            cin >> temp;
            m += temp;
        }
        int a;
        cin >> a;
        cout << a * 6 - m << endl;
    }
}
