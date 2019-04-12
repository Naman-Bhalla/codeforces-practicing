//
// Created by Naman Bhalla on 2019-04-12.
//

#include <cstdio>
#include <algorithm>
#include <cstring>
#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int dp[4001];
int main(){
    int n, a, b, c;
    memset(dp, -1, sizeof dp);
    cin >> n >> a >> b >> c;

    dp[0] = 0;
    int as[]{a, b, c};
    for(int i{0}; i < 3; ++i){
        for(int j{as[i]}; j <= n; ++j){
            if(dp[j - as[i]] != -1){
                dp[j] = max(1 + dp[j - as[i]], dp[j]);
            }
        }
    }

    cout << dp[n] << endl;
    return 0;
}