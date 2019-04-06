//
// Created by Naman Bhalla on 2019-04-06.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <utility>
#include <cstring>

using namespace std;

int main(){
    string s;
    cin >> s;
    int current_count{}, previous_count{};
    char current_char{'0'}, previous_char{'0'};

    for(int i{}; i < s.size(); ++i){
        if(s[i] == current_char and current_count < 2 and previous_count < 2){
            ++current_count;
            cout << s[i];
        } else if(s[i] != current_char){
            previous_char = current_char;
            previous_count = current_count;
            current_char = s[i];
            current_count = 1;
            cout << s[i];
        }
    }
    return 0;
}