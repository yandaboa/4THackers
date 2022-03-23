

#include <bits/stdc++.h>

using namespace std;

int _dimension = 0;
int _energy[1001][1001], _value[1001][1001];
int _currEnergy = 0;

void CReadIn(){
    ifstream fin("input.in");
    fin >> _dimension >> _currEnergy;
    for(int i = 0; i < _dimension; i++){
        for(int m = 0; m < _dimension; m++){
            fin >> _energy[i][m];
        }
    }
    fin.close();
}

void Core(){
    for(int i = 0; i < _dimension; i++){
        for(int m = 0; m < _dimension; m++){
            if(i == 0 && m == 0){
                _value[i][m] = _energy[i][m];
                continue;
            }
            if(i == 0){
                _value[i][m] = _value[i][m - 1] + _energy[i][m];
                continue;
            }
            if(m == 0){
                _value[i][m] = _value[i - 1][m] + _energy[i][m];
                continue;
            }
            if(_value[i - 1][m] > _value[i][m - 1]){
                _value[i][m] = _value[i - 1][m] + _energy[i][m];
            }else{
                _value[i][m] = _value[i][m - 1] + _energy[i][m];
            }
        }
    }
}

void CWriteOut(){
    _currEnergy += _value[_dimension - 1][_dimension - 1];
    cout << _currEnergy << endl;
}

int main(){
    CReadIn();
    Core();
    CWriteOut();
    return 0;
}