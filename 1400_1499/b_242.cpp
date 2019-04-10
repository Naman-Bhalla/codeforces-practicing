//
// Created by Naman Bhalla on 2019-04-10.
//

#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>

using namespace std;

int main(){
    int n;
    cin >> n;
    bool is_there{true};
    int ovl_left, ovl_right;
    int l, r;
    cin >> l >> r;
    ovl_left = l;
    ovl_right = r;
    int ovl_idx = 1;

    for(int i{2}; i <= n; ++i){
        cin >> l >> r;
        if(l <= ovl_left and r >= ovl_right){
            is_there = true;
            ovl_left = l;
            ovl_right = r;
            ovl_idx = i;
        }
        if(l < ovl_left){
            ovl_left = l;
            is_there = false;
        }
        if(r >ovl_right){
            ovl_right = r;
            is_there = false;
        }
    }

    if(is_there){
        cout << ovl_idx << endl;
    } else {
        cout << -1 << endl;
    }


    return 0;
}