

#include <bits/stdc++.h>

using namespace std;

int _max = 0, _bugs = 0, _top = 0;
vector<int> _damage;

void CReadIn(){
    cin >> _max >> _bugs;
    _damage.resize(_bugs);
    for(int i = 0; i < _bugs; i++){
        cin >> _damage[i];
    }
}

void Core(){
    sort(_damage.begin(), _damage.end());
    int total = 0;
    while(_top < _bugs + 1){
        total += _damage[_top];
        if(_top * total > _max){
            break;
        }
        _top ++;
    }
}

void CWriteOut(){
    cout << _top;
}

int main(){
    CReadIn();
    Core();
    CWriteOut();
    return 0;
}