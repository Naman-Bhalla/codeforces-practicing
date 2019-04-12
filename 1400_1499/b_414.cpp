//
// Created by Naman Bhalla on 2019-04-12.
//

#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <numeric>

using namespace std;

const int mod{1000000007};
int dp[2002][2002];
int main(){
    int n, k;
    memset(dp, 0, sizeof dp);
    cin >> n >> k;

    for(int i{1}; i <= n; ++i){
        dp[1][i] = 1;
    }
    for(int i{2}; i<= k; ++i){
        for(int j{1}; j <= n; ++j){
            for(int l{j}; l <= n; l += j){
                dp[i][l] += dp[i - 1][j];
                dp[i][l] %= mod;
            }
        }
    }

    int answer{0};
    for(int i{1}; i <= n; ++i){
        answer += dp[k][i];
        answer %= mod;
    }
    cout << answer << endl;
    return 0;
}