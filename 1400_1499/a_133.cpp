//
// Created by Naman Bhalla on 2019-04-09.
//

#include <cstdio>
#include <algorithm>
#include <iostream>
#include <cstring>

using namespace std;

int main(){
    string s;
    cin >> s;

    for(auto &chars: s){
        if(chars == 'H' or chars == 'Q' or chars == '9'){
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}