//
// Created by Naman Bhalla on 2019-04-12.
//

#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>

using namespace std;
int dp[100005];
int main(){
    memset(dp, 0, sizeof dp);
    string s;
    cin >> s;

    for(int i{2}; i <= s.size(); ++i){
        if(s[i - 1]== s[i - 2]){
            dp[i] = 1 + dp[i - 1];
        } else {
            dp[i] = dp[i - 1];
        }
    }

    int m;
    cin >> m;
    int l, r;
    for(int i{1}; i <= m; ++i){
        cin >> l >> r;
        cout << dp[r] - dp[l] << endl;
    }

    return 0;
}