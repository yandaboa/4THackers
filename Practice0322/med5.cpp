

#include <bits/stdc++.h>

using namespace std;

int _friends = 0, _common = 0;
vector<int> _countries;
vector<string> _trip;

void CReadIn(){
    cin >> _friends;
    _countries.resize(_friends + 1);
    for(int i = 0; i < _friends + 1; i++){
        cin >> _countries[i];
    }
    string temp = "", city = "";
    for(int i = 0; i < _countries.size(); i++){
        temp = "";
        for(int m = 0; m < _countries[i]; m++){
            cin >> city;
            temp += city;
        }
        _trip.push_back(temp);
    }
}

void Core(){
    int cmn = 0, temp = 0;
    string tempS = "";
    for(int i = 1; i < _countries.size(); i++){
        cmn = 0;
        tempS = "";
        for(int m = 0; m < _countries[i] - 1; m++){
            tempS += " ";
        }
        tempS += _trip[0];
        for(int m = 0; m < _countries[i] + _trip[0].length() - 1; m++){
            temp = 0;
            for(int s = 0; s < min(tempS.length(), _trip[i].length()); s++){
                if(tempS[s] == _trip[i][s] && tempS[s] != ' '){
                    temp ++;
                }
            }
            if(temp > cmn){
                cmn = temp;
            }
            _trip[i] = " " + _trip[i];
        }
        _common += cmn;
    }
}

void CWriteOut(){
    cout << _common;
}

int main(){
    CReadIn();
    Core();
    CWriteOut();
    return 0;
}