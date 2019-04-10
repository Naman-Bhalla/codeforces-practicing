//
// Created by Naman Bhalla on 2019-04-10.
//

#include <cstdio>
#include <cstring>
#include <algorithm>
#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int main(){
    string target{"hello"};
    string s;
    cin >> s;

    int i{}, j{};

    while(i < s.size() and j < target.size()){
        if(s[i] == target[j]){
            ++i;
            ++j;
        } else {
            ++i;
        }
    }

    if(j == target.size()){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}