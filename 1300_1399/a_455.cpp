//
// Created by Naman Bhalla on 2019-04-06.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <utility>
#include <cstring>

using namespace std;
int counts[100005];
int dp[100005];
int main(){
    int n, now, maxm{};
    memset(counts, 0, sizeof counts);
    memset(dp, 0, sizeof dp);

    cin >> n;
    for(int i{1}; i <= n; ++i){
        cin >> now;
        ++counts[now];
        maxm = max(maxm, now);
    }

    dp[1] = counts[1]; // We can remove each 1 sepaprately. It is the only number
    for(int i{2}; i <= maxm; ++i){
        dp[i] = max(dp[i - 1], dp[i - 2] + i * counts[i]);
    }

    cout << dp[maxm] << endl;

    return 0;
}