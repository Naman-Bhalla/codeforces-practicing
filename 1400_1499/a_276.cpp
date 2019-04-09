//
// Created by Naman Bhalla on 2019-04-09.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>
#include <utility>
#include <queue>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    int f, t;
    int curr_max{-1000000010};
    for(int i{1}; i <= n; ++i){
        cin >> f >> t;
        if(t <= k){
            curr_max = max(curr_max, f);
        } else {
            curr_max = max(curr_max, f - t + k);
        }
    }

    cout << curr_max << endl;
    return 0;
}