//
// Created by Naman Bhalla on 2019-03-28.
//

#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

int main(){
    string s;

    cin >> s;

    for(auto chars: s){
        if(chars == 'H' or chars == 'Q' or chars == '9'){
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}