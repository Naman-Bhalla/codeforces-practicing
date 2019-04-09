//
// Created by Naman Bhalla on 2019-04-08.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>
#include <utility>

using namespace std;

int main(){
    int n;
    cin >> n;
    string s;

    for(int i{1}; i <= n; ++i){
        cin >> s;
        if(s.size() > 10){
            cout << s.at(0) << s.size() - 2 << s.at(s.size() - 1) << endl;
        } else {
            cout << s << endl;
        }
    }
    return 0;
}