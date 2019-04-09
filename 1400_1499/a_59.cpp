//
// Created by Naman Bhalla on 2019-04-09.
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
    int lower_c{}, upper_c{};

    for(auto &chars: s){
        if(chars <= 'Z'){
            ++upper_c;
        } else {
            ++lower_c;
        }
    }

    if(lower_c >= upper_c){
        for(auto &chars:s){
            chars = tolower(chars);
        }
    } else {
        for(auto &chars:s){
            chars = toupper(chars);
        }
    }

    cout << s << endl;
    return 0;
}