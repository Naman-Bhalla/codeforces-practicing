//
// Created by Naman Bhalla on 2019-04-03.
//

#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int a[100005];
//int l[100005];
int dp[100005];
bool seen[100005];

int main(){
    memset(a, 0, sizeof a);
//    memset(l, 0, sizeof l);
    memset(dp, 0, sizeof dp);
    memset(seen, 0, sizeof seen);

    int n, m, now;
    cin >> n >> m;

    for(int i{1}; i <= n; ++i){
        cin >> a[i];
    }

    dp[n + 1] = 0;

    for(int i{n}; i >= 1; --i){
        if(not seen[a[i]]){
            dp[i] = dp[i + 1] + 1;
        } else {
            dp[i] = dp[i + 1];
        }
        seen[a[i]] = true;
    }

    for(int i{1}; i<= m; ++i){
        cin >> now;
        cout << dp[now] << endl;
    }

    return 0;
}