

#include <bits/stdc++.h>

using namespace std;

int _tiles = 0, _moves = 0;
vector<int> _steps;

void CReadIn(){
    cin >> _tiles;
    _steps.resize(_tiles);
    for(int i = 0; i < _tiles; i++){
        cin >> _steps[i];
    }
}

void Core(){
    int currLoc = 0;
    int temp = 0;
    while(true){
        if(_steps[currLoc] == -1){
            _moves = -1;
            break;
        }
        if(_steps[currLoc] == 0){
            break;
        }
        temp = _steps[currLoc];
        _steps[currLoc] = -1;
        currLoc += temp;
        currLoc %= _steps.size();
        _moves ++;
    }
}

void CWriteOut(){
    cout << _moves;
}

int main(){
    CReadIn();
    Core();
    CWriteOut();
    return 0;
}