//
// Created by Naman Bhalla on 2019-04-08.
//

#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>
#include <utility>


using namespace std;

int main(){
    string s;
    cin >> s;
    int lucky_count{};
    for(auto &chars: s){
        if(chars == '4' or chars == '7'){
            ++lucky_count;
        }
    }

    cout << ((lucky_count == 4 or lucky_count == 7) ? "YES": "NO") << endl;

    return 0;
}