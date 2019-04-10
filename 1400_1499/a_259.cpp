//
// Created by Naman Bhalla on 2019-04-10.
//

#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    char prev{'-'};
    char now;
    for(int i{1}; i<= 8; ++i){
        prev = '-';
        for(int j{1}; j <= 8; ++j){
            cin >> now;
            if(now == prev){
                cout<< "NO" <<endl;
                return 0;
            }
            prev = now;
        }
    }

    cout << "YES" << endl;
    return 0;
}