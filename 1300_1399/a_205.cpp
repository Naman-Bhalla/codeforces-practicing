//
// Created by Naman Bhalla on 2019-03-31.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <vector>

using namespace std;

int main(){
    bool distinct{};
    int n{};
    int now{};
    int minm{1000000001};
    int min_ind{};

    cin >> n;

    for(int i{}; i < n; ++i){
        cin >> now;
        if(now == minm){
            distinct = false;
        } else if(now < minm){
            minm = now;
            distinct = true;
            min_ind= i + 1;
        }
    }

    if(distinct){
        cout << min_ind << endl;
    } else {
        cout << "Still Rozdil" << endl;
    }

    return 0;
}