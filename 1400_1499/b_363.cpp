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

int h[200005];
int main(){
    int n, k;
    cin >> n >> k;
    memset(h, 0, sizeof h);

    for(int i{1}; i <= n; ++i){
        cin >> h[i];
        h[i] += h[i - 1];
    }


    int minm{100000000};
    int min_i{-1};
    int l{1};
    for(int r{k}; r <= n; ++r){
        if(h[r] - h[l - 1] < minm){
            minm = h[r] - h[l - 1];
            min_i = l;
        }
        ++l;
    }

    cout << min_i << endl;
    return 0;
}