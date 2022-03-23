#include <bits/stdc++.h>

using namespace std;

int main(){
int x1, y1, x2, y2; cin >> x1; cin >> y1;  cin >> x2; cin >> y2;
    int dx = abs(x1-x2);
    int yx = abs(y1-y2);
    int o =  yx/dx;
    cout << o;
}