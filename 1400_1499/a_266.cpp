//
// Created by Naman Bhalla on 2019-04-09.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <utility>
#include <cstring>

using namespace std;

int main(){
    int n;
    string s;
    cin >> n;
    cin >> s;
    int change_count{};

    for(int i{1}; i < n; ++i){
        if(s[i] == s[i - 1]){
            ++change_count;
        }
    }

    cout << change_count << endl;
    return 0;
}