//
// Created by Naman Bhalla on 2019-04-08.
//

#include <algorithm>
#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
#include <string>

using namespace std;

int main(){
    string s;
    string t;
    cin >> s >> t;

    if(s.size() != t.size()){
        cout << "NO" << endl;
    } else if((s.find('1') == string::npos and s != t) or (t.find('1') == string:: npos and s != t)){
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }

    return 0;
}