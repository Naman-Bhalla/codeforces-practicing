//
// Created by Naman Bhalla on 2019-04-10.
//

#include <cstdio>
#include <algorithm>
#include <iostream>
#include <vector>
#include <cstring>
#include <utility>

using namespace std;

//int dp[100005][100005];
int main(){
    int n, m;
//    memset(dp, 0, sizeof dp);
    cin >> n >> m;


    cout << max(n - 1, m - 1) << " " << n + m - 1 - max(n - 1, m - 1) << endl;
    return 0;
}