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

bool left_r[11];
bool left_c[11];

int main(){
    memset(left_c,0, sizeof left_c);
    memset(left_r, 0, sizeof left_r);

    char n;
    int r, c;
    cin >> r >> c;
//    int left_r{}, left_c{};

    for(int i{}; i < r; ++i){
        for(int j{}; j < c; ++j){
            cin >> n;
            if(n == 'S'){
                left_c[j] = true;
                left_r[i] = true;
            }
        }
    }

    int rows{}, columns{};
    for(int i{}; i < r; ++i){
        if(not left_r[i]){
            ++rows;
        }
    }

    for(int i{}; i < c; ++i){
        if(not left_c[i]){
            ++columns;
        }
    }

    cout<< (c*rows) + (r * columns) - rows * columns << endl;

    return 0;
}