//
// Created by Naman Bhalla on 2019-03-30.
//

#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main(){

    int n{};
    string s{};

    cin >> n;
    for(int i{}; i < n; ++i){
        cin >> s;
        if(s.size() > 10){
            cout << s.at(0) << s.size() - 2 << s.at(s.size() - 1) << endl;
        } else {
            cout << s << endl;
        }
    }

    return 0;
}