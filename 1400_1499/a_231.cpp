//
// Created by Naman Bhalla on 2019-04-09.
//

#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>
#include <iostream>

using namespace std;

int prblm_count[1001];
int main(){
    int n, now;
    memset(prblm_count, 0, sizeof prblm_count);
    cin >> n;
    for(int i{1}; i <= n; ++i){
        for(int j{1}; j <= 3; ++j){
            cin >> now;
            prblm_count[i] += now;
        }
    }
    now = 0;
    for(int i{1}; i<= n; ++i){
        if(prblm_count[i] >= 2){
            ++now;
        }
    }

    cout << now << endl;

    return 0;
}