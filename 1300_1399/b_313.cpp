//
// Created by Naman Bhalla on 2019-04-04.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>
#include <utility>

using namespace std;

int dp[200005];

int main(){
    string s;
    cin >> s;
    int m, l, r;
    cin >> m;
    memset(dp, 0, sizeof dp);

    for(int i{1}; i < s.size(); ++i){
        if(s[i] == s[i - 1]){
            dp[i + 1] = dp[i] + 1;
        } else{
            dp[i + 1] = dp[i];
        }
    }
    for(int i{}; i < m; ++i){
        cin >> l >> r;
        cout << dp[r] - dp[l] << endl;
    }
    return 0;
}