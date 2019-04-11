//
// Created by Naman Bhalla on 2019-04-11.
//

#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>

using namespace std;

int counts[26];
int main(){
    memset(counts, 0, sizeof counts);

    string s;
    cin >> s;

    for(auto &chars: s){
        ++counts[chars-'a'];
    }

    int odd_counts{};
    for(auto &c: counts){
        if(c % 2){
            ++odd_counts;
        }
    }

    if(odd_counts == 0){
        cout << "First" << endl;
        return 0;
    }

    if(odd_counts % 2){
        cout << "First" << endl;
    } else {
        cout << "Second" <<endl;
    }

    return 0;
}