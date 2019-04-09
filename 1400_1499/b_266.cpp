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
    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;

    for(int i{}; i < t; ++i){
        for(int j{}; j < n - 1; ++j){
            if(s.at(j) == 'B' and s.at(j + 1) == 'G'){
                s.at(j) = 'G';
                s.at(j + 1) = 'B';
                ++j;
            }
        }
    }

    cout << s << endl;
    return 0;
}