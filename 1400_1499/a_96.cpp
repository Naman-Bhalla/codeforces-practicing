//
// Created by Naman Bhalla on 2019-04-10.
//

#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>
#include <utility>

using namespace std;

int main(){
    string s;
    cin >> s;

    if(s.find("1111111") != string::npos or s.find("0000000") != string::npos){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}