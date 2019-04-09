//
// Created by Naman Bhalla on 2019-04-09.
//

#include <cstdio>
#include <algorithm>
#include <cstring>
#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int main(){
    int n, now, cool_c{};

    cin >> n;
    cin >> now;
    int curr_min{now}, curr_max{now};

    for(int i{2}; i <= n; ++i){
        cin >> now;
        if(now < curr_min){
            ++cool_c;
            curr_min = now;
        }
        else if(now > curr_max) {
            ++cool_c;
            curr_max = now;
        }
    }

    cout << cool_c <<endl;

    return 0;
}