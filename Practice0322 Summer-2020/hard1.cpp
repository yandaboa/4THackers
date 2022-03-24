
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    arr.resize(1000000);
    fill(arr.begin(), arr.end(), 0);
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        for (int j = a; j < b + 1; j++)
        {
            arr[j]++;
        }
    }
    int o = *max_element(arr.begin(), arr.end());
    int count = 0;
    for (int i : arr)
    {
        if (i == o)
        {
            cout << count;
            break;
        }
        count++;
    }
}