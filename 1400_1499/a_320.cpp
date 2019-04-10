//
// Created by Naman Bhalla on 2019-04-10.
//

#include <cstdio>
#include <algorithm>
#include <iostream>
#include <cstring>
#include <vector>
#include <utility>
#include <string>
using namespace std;

int main(){
    string s;
    cin >> s;

    if(s[0] == '4'){
        cout << "NO" << endl;
        return 0;
    }

    if(s.find("444") != string::npos){
        cout << "NO" << endl;
        return 0;
    }

    for(auto &chars : s){
        if(chars != '4' and chars != '1'){
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;

    return 0;
}