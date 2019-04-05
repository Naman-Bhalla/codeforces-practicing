//
// Created by Naman Bhalla on 2019-04-05.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>
#include <utility>

using namespace std;

const int mod{1000000007};
long long int dp[101][2];
int main(){
    int n, k, d;
    memset(dp, 0, sizeof dp);
    cin >> n >> k >> d;

    dp[0][0] = 1;
    for(int i{1}; i <= n; ++i){
        for(int j{1}; j <= k; ++j){
            if(i - j < 0){
                break;
            }
            if(j >= d){
                dp[i][1] += dp[i - j][1] + dp[i - j][0];
                dp[i][1] %= mod;
            } else {
                dp[i][1] += dp[i - j][1];
                dp[i][0] += dp[i - j][0];
                dp[i][0] %= mod;
                dp[i][1] %= mod;
            }
        }
    }

    cout << dp[n][1] << endl;


    return 0;
}