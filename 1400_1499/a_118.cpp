//
// Created by Naman Bhalla on 2019-04-10.
//

#include <cstdio>
#include <algorithm>
#include <cstring>
#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int main(){
    string s;
    cin >> s;

    for(auto &chars: s){
        chars = tolower(chars);
        if(chars == 'a' or chars == 'e' or chars =='u' or chars == 'i' or chars == 'o' or chars == 'y'){
            continue;
        } else{
            cout << "." << (char)tolower(chars);
        }
    }

    cout << endl;
    return 0;
}