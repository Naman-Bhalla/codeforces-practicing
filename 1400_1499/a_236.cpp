//
// Created by Naman Bhalla on 2019-04-09.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>
#include <utility>

using namespace std;

int num_dist{};
string s;
bool counts[26];
int main(){
    memset(counts, 0, sizeof counts);
    cin >> s;

    for(auto &chars: s){
        if(counts[chars - 'a']){
            continue;
        }
        ++num_dist;
        counts[chars - 'a'] = true;
    }

    if(num_dist % 2 != 0){
        cout << "IGNORE HIM!" << endl;
    } else {
        cout << "CHAT WITH HER!" << endl;
    }
    return 0;
}