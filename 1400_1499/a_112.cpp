//
// Created by Naman Bhalla on 2019-04-10.
//

#include <cstdio>
#include <algorithm>
#include <iostream>
#include <cstring>

using namespace std;

int main(){
    string s, t;
    cin >> s >> t;

    for(auto &chars: s){
        chars = tolower(chars);
    }

    for(auto &chars: t){
        chars = tolower(chars);
    }

    if(s < t){
        cout << -1 << endl;
    } else if(t < s){
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }
    
    return 0;

}