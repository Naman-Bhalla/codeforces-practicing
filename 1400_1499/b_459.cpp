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
    long long int n, now, curr_max{0}, curr_min{1000000009}, count_max{}, count_min{};
    cin >> n;

    for(int i{1}; i <= n; ++i){
        cin >> now;

        if(now == curr_max){
            ++count_max;
        }else if(now > curr_max){
            curr_max = now;
            count_max = 1;
        }

        if(now == curr_min){
            ++count_min;
        } else if(now < curr_min){
            curr_min = now;
            count_min = 1;
        }
    }

    cout << curr_max - curr_min << " ";
    if(curr_max == curr_min){
        cout << ((n * (n - 1)) >> 1) << endl;
    } else {
        cout << count_max * count_min << endl;
    }

    return 0;
}