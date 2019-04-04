//
// Created by Naman Bhalla on 2019-04-04.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <utility>
#include <cstring>

using namespace std;

long long int p[5005];
//int p_sum[5005];
long long int dp[5005][5005];
int main(){
    long long int n, m, k;
    memset(p, 0, sizeof p);
//    memset(p_sum, 0, sizeof p_sum);
    cin >> n >> m >> k;

    for(int i{1}; i <= n; ++i){
        cin >> p[i];
        p[i] += p[i - 1];
    }

    for(int i{1}; i <= k; ++i){
        for(long long int j{i * m}; j <= n; ++j){
            dp[i][j] = max(dp[i][j - 1], dp[i - 1][j - m] + p[j] - p[j - m]);
        }
    }

    cout << dp[k][n] << endl;



    return 0;
}