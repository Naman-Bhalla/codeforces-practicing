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

int h[200005];

int main(){
    int n, k;
    cin >> n >> k;
    memset(h, 0, sizeof h);

    for(int i{1}; i <= n; ++i){
        cin >> h[i];
    }

    for(int i{1}; i <= n; ++i){
        h[i] += h[i - 1];
    }

    int j{k};
    int curr_ans, min_m{1000000009}, min_i{-1};
    for(; j <= n; ++j){
        curr_ans = h[j] - h[j - k];
        if(curr_ans < min_m){
            min_m = curr_ans;
            min_i = (j - k + 1);
        }
    }

    cout << min_i << endl;
    return 0;
}