//
// Created by Naman Bhalla on 2019-03-28.
//

#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
    int n{}, next{};
    int min_i{}, max_i{};

    cin >> n;

    int minm{101}, maxm{0};

    for(int i{0}; i < n; ++i){
        cin >> next;
        if(next > maxm){
            maxm = next;
            max_i = i;
        }

        if(next <= minm){
            minm = next;
            min_i = i;
        }
    }

    int ans {n - min_i - 1};
    ans += max_i;

    if(min_i < max_i){
        ans -= 1;
    }

    cout << ans << endl;

    return 0;
}