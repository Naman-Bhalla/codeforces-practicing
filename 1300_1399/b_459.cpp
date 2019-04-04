//
// Created by Naman Bhalla on 2019-04-03.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>

using namespace std;

int main(){
    long long int n, now;
    cin >> n;

    long long int minm{2000000007}, maxm{0};
    long long int min_m{0}, maxm_m{0};

    for(int i{}; i < n; ++i){
        cin >> now;
        if(now < minm){
            minm = now;
            min_m = 1;
        } else if(now == minm) {
            ++min_m;
        }

        if(now > maxm){
            maxm = now;
            maxm_m = 1;
        } else if(now == maxm) {
            ++maxm_m;
        }
    }

    if(min_m == n){
        cout << 0 << " " << ((n * (n - 1)) >> 1) << endl;
        return 0;
    }
    cout << maxm - minm << " " << min_m * maxm_m << endl;
    return 0;
}