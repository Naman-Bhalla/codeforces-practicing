//
// Created by Naman Bhalla on 2019-04-01.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <utility>
#include <cstring>

using namespace std;
int a[100005];
//int dp[100005];
vector< int > dp{};

int main(){
    int n{};
    cin >> n;
    if(n < 2){
        cout << n << endl;
        return 0;
    }

//    memset(dp, 0, sizeof dp);
    memset(a, 0, sizeof a);

    for(int i{}; i < n; ++i){
        cin >> a[i];
    }

    dp.push_back(1);
    dp.push_back(2);

    for(int i{2}; i < n; ++i){
        if(a[i] == a[i - 1] + a[i - 2]){
            dp.push_back(dp[i - 1] + 1);
        } else{
            dp.push_back(2);
        }
    }

    cout << *max_element(dp.begin(), dp.end()) << endl;


    return 0;
}