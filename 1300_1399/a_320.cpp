//
// Created by Naman Bhalla on 2019-03-31.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

//bool poss[1000000001];

int main(){
    string s;
    cin >> s;

    for(int i{}; i < s.size(); ++i){
        if(s[i] != '1' and s[i] != '4'){
            cout << "NO" << endl;
            return 0;
        }
    }

    if(s.find("444") != s.npos){
        cout << "NO" << endl;
        return 0;
    }

    if(s[0] == '4'){
        cout << "NO" << endl;
        return 0;
    }

    cout << "YES" << endl;
    return 0;
}