//
// Created by Naman Bhalla on 2019-04-14.
//

#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>

using namespace std;

int main(){
    string s;
    cin >> s;
    int pr_c{}, cu_c{};
    char pr_char{}, cu_char{};

    for(auto &chars: s){
        if(chars == cu_char and cu_c == 1 and pr_c < 2){
            ++cu_c;
            cout << chars;
        } else if(chars != cu_char){
            pr_char = cu_char;
            pr_c = cu_c;
            cu_c = 1;
            cu_char = chars;
            cout << chars;
        }
    }
    return 0;
}