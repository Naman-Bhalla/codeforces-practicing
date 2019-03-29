//
// Created by Naman Bhalla on 2019-03-29.
//

#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

bool rows_st[11]{};
bool cols_st[11]{};

int main(){
    int r{}, c{};
    cin >> r >> c;
    char now{};
    int safe_rows{}, safe_cols{};

    for(int i{}; i < r; ++i){
        for(int j{}; j < c; ++j){
            cin >> now;
            if(now == 'S'){
                rows_st[i] = true;
                cols_st[j] = true;
            }
        }
    }

    for(int i{}; i <r; ++i){
        if(not rows_st[i]){
            ++safe_rows;
        }
    }

    for(int i{}; i < c; ++i){
        if(not cols_st[i]){
            ++safe_cols;
        }
    }

    cout << (safe_rows * c) + (safe_cols * r) - (safe_rows * safe_cols) << endl;

    return 0;
}