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

int main(){
    int n, x, y, sum_u{}, sum_d{};
    cin >> n;
    bool opp_p_l{false};

    for(int i{1}; i <= n; ++i){
        cin >> x >> y;
        sum_u += x;
        sum_d += y;
        if(x % 2 != y % 2){
            opp_p_l = true;
        }
    }

    if(sum_u % 2 == sum_d % 2){
        if((sum_u % 2 != 0) and opp_p_l){
            cout << 1 << endl;
        } else if(sum_d % 2 == 0){
            cout << 0 << endl;
        } else {
            cout << -1 << endl;
        }
    } else {
        cout << -1 << endl;
    }
    return 0;
}