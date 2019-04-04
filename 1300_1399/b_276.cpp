//
// Created by Naman Bhalla on 2019-04-04.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <utility>
#include <cstring>

using namespace std;

int counts[26];

int main(){
    string s;
    memset(counts, 0, sizeof counts);
    cin >> s;

    for(auto chars: s){
        ++counts[chars - 'a'];
    }

    int odd_count{};

    for(auto i: counts){
        if(i % 2)
            ++odd_count;
    }

    if(odd_count <= 1){
        cout << "First" << endl;
    } else if(odd_count % 2){
        cout << "First" << endl;
    } else {
        cout << "Second" << endl;
    }

    return 0;
}