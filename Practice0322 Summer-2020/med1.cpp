

#include <bits/stdc++.h>

using namespace std;

vector<string> _out;
int _num = 0;

void CReadIn(){
    cin >> _num;
}

void Core(){
    string temp = "";
    for(int i = 0; i < _num; i++){
        cin >> temp;
        if(i == 0){
            _out.push_back(temp);
            continue;
        }
        if(temp != _out[_out.size() - 1]){
            _out.push_back(temp);
        }
    }
}

void CWriteOut(){
    for(int i = 0; i < _out.size(); i++){
        cout << _out[i] << " ";
    }
}

int main(){
    CReadIn();
    Core();
    CWriteOut();
    return 0;
}