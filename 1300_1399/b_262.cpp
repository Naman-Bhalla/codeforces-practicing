//
// Created by Naman Bhalla on 2019-04-03.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>
#include <utility>
#include <cmath>

using namespace std;

int main(){
    int n, k, now;
    cin >> n >> k;

    int sum_n{};
    int maxm_neg{-1000006};

    for(int i{}; i < n; ++i){
        cin >> now;
        if(k){
            if(now < 0) {
                maxm_neg = now;
                --k;
                sum_n += (-maxm_neg);
            } else if(now == 0){
                k = 0;
            } else {
                sum_n += now;
                maxm_neg = min(abs(maxm_neg), now);
                if(k % 2 != 0){
                    sum_n -= (2 * maxm_neg);
                }
                k = 0;
            }
        } else {
            sum_n += now;
        }
    }

    if(k != 0 and k % 2 != 0){
        sum_n -= (2 * abs(maxm_neg));
    }

    cout << sum_n << endl;

    return 0;
}