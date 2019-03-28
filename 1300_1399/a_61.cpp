//
// Created by Naman Bhalla on 2019-03-28.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <utility>

using namespace std;

int main(){
    string s1;
    string s2;

    cin >> s1 >> s2;

    for(int i{}; i < s1.size(); ++i){
        if(s1.at(i) == s2.at(i)){
            cout << "0";
        } else {
            cout << "1";
        }
    }
    cout << endl;
}