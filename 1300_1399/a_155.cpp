//
// Created by Naman Bhalla on 2019-03-28.
//

#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main(){

    int n{}, now{};
    cin >> n;
    int am_count{}, minm{10001}, maxm{-1};

    for(int i{}; i < n; ++i){
        cin >> now;
        if(now >maxm){
            am_count++;
            maxm = now;
        }
        if(now < minm){
            am_count++;
            minm = now;
        }
    }

    cout << am_count - 2 << endl;

    return 0;
}