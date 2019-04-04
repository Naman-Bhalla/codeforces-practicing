//
// Created by Naman Bhalla on 2019-04-04.
//

#include <cstring>
#include <algorithm>
#include <cstdio>
#include <iostream>
#include <vector>
#include <utility>

using namespace std;
int dp[4][4004];
int a[3];

int main(){
    int n;
    memset(dp, 0, sizeof dp);
    cin >> n;
    for(int i{}; i < 3; ++i){
        cin >> a[i];
    }

    for(int i{1}; i <= 3; ++i){
        for(int j{}; j <= n; ++j){
            dp[i][j] = dp[i - 1][j];
            if(j >= a[i - 1] and (j == a[i - 1] or dp[i][j - a[i - 1]] > 0)){
                dp[i][j] = max(dp[i][j], 1 + dp[i][j - a[i - 1]]);
            }
        }
    }
    
    cout << dp[3][n] << endl;
    return 0;
}