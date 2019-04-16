//
// Created by Naman Bhalla on 2019-04-14.
//

#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>
#include <iostream>
#include <utility>

using namespace std;

const int mod{100000000};
int dp[101][101][2]; // 0 -> Foot 1 -> Horse
int main(){
    int n1, n2, k1, k2;
    memset(dp, 0, sizeof dp);
    cin >> n1 >> n2 >> k1 >> k2;
    dp[0][0][0] = 1;
    dp[0][0][1] = 1;

    for(int i{0} ; i <= n1; ++i){
        for(int j{0}; j <= n2; ++j){
            for(int k{0}; k <= 1; ++k){
                if(i == 0 and j == 0){
                    dp[i][j][k] = 1;
                } else {
                    if(k){
                        for(int tgthr{1}; tgthr <= min(j, k2); ++tgthr){
                            dp[i][j][k] += dp[i][j - tgthr][0];
                            dp[i][j][k] %= mod;
                        }
                    } else {
                        for(int tgthr{1}; tgthr <= min(i, k1); ++tgthr){
                            dp[i][j][k] += dp[i - tgthr][j][1];
                            dp[i][j][k] %= mod;
                        }
                    }
                }
            }
        }
    }

    cout << ((dp[n1][n2][0] % mod) + (dp[n1][n2][1] % mod)) % mod << endl;


    return 0;
}