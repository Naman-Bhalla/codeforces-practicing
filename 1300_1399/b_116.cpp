//
// Created by Naman Bhalla on 2019-04-02.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <utility>
#include <cstring>

using namespace std;

char arrays[12][12];

int main(){
    int n{}, m{};
    cin >> n >> m;
    memset(arrays, 0, sizeof arrays);

    for(int i{1}; i <= n; ++i){
        for(int j{1}; j <= m; ++j){
            cin >> arrays[i][j];
        }
    }

    int rows[]{-1, 0, 0, 1};
    int cols[]{0, -1, 1, 0};

    int answer {};

    for(int i{1}; i <= n; ++i){
        for(int j{1}; j <= m; ++j){
            if(arrays[i][j] == 'W'){
                for(int k{}; k < 4; ++k){
                    if(i + rows[k] >= 1 and i + rows[k] <= n and j + cols[k] >= 1 and j + cols[k] <= m and arrays[i + rows[k]][j + cols[k]] == 'P'){
                        ++answer;
                        break;
                    }
                }
            }
        }
    }

    cout << answer << endl;

    return 0;
}