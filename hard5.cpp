

#include <bits/stdc++.h>

using namespace std;

int _lines = 0, _days = 0, _new = 0;
vector<string> _map;

void CReadIn(){
    ifstream fin("input.in");
    fin >> _lines >> _days;
    _map.resize(_lines);
    for(int i = 0; i < _lines; i++){
        fin >> _map[i];
    }
    fin.close();
}

void Core(){
    for(int i = 0; i < _days; i++){
        for(int m = 0; m < _lines; m++){
            for(int s = 0; s < _lines; s++){
                if(_map[m][s] == 'Z'){
                    if(m > 0){
                        if(_map[m - 1][s] == '*'){
                            _map[m - 1][s] = 'x';
                        }
                    }
                    if(s > 0){
                        if(_map[m][s - 1] == '*'){
                            _map[m][s - 1] = 'x';
                        }
                    }
                    if(m < _lines - 1){
                        if(_map[m + 1][s] == '*'){
                            _map[m + 1][s] = 'x';
                        }
                    }
                    if(s < _lines - 1){
                        if(_map[m][s + 1] == '*'){
                            _map[m][s + 1] = 'x';
                        }
                    }
                }
            }
        }
        for(int m = 0; m < _lines; m++){
            for(int s = 0; s < _lines; s++){
                if(_map[m][s] == 'x'){
                    _map[m][s] = 'Z';
                }
            }
        }
    }

    for(int m = 0; m < _lines; m++){
        for(int s = 0; s < _lines; s++){
            if(_map[m][s] == '*'){
                if(m > 0){
                    if(_map[m - 1][s] == 'Z'){
                        _map[m][s] = '#';
                        _new ++;
                        continue;
                    }
                }
                if(s > 0){
                    if(_map[m][s - 1] == 'Z'){
                        _map[m][s] = '#';
                        _new ++;
                        continue;
                    }
                }
                if(m < _lines - 1){
                    if(_map[m + 1][s] == 'Z'){
                        _map[m][s] = '#';
                        _new ++;
                        continue;
                    }
                }
                if(s < _lines - 1){
                    if(_map[m][s + 1] == 'Z'){
                        _map[m][s] = '#';
                        _new ++;
                        continue;
                    }
                }
            }
        }
    }
}

void CWriteOut(){
    cout << _new;
}

int main(){
    CReadIn();
    Core();
    CWriteOut();
    return 0;
}