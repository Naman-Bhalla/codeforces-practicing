//
// Created by Naman Bhalla on 2019-04-06.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>
#include <utility>

using namespace std;
long long int x[200005];
long long int dp[3][200005];
int parents[200005];
int main(){
    int n, k;
    memset(x, 0, sizeof x);
    memset(dp, 0, sizeof dp);
    memset(parents, 0, sizeof parents);

    cin >> n >> k;
    for(int i{1};i <= n; ++i){
        cin >> x[i];
        x[i] += x[i - 1];
    }


    for(int i{1}; i <= 2; ++i){
        for(int j{i * k}; j <= n; ++j){
            if(dp[i][j - 1] >= dp[i - 1][j - k] + x[j] - x[j - k]){
                parents[j] = parents[j - 1];
                dp[i][j] = dp[i][j - 1];
            } else {
                dp[i][j] = dp[i - 1][j - k] + x[j] - x[j - k];
                parents[j] = j - k + 1;
            }
        }
    }

//    cout << dp[2][n] << endl;
    int i{2};
    int j{n};
    vector< int > answer;
    while(true){
        if(dp[i][j - 1] == dp[i][j]){
            --j;
        } else {
            answer.push_back(j - k + 1);
            --i;
            j -= k;
            if(i == 0){
                break;
            }
        }

    }
    cout << answer[answer.size() - 1] << " " << answer[answer.size() - 2] << endl;
    return 0;
}