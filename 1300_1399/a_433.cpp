//
// Created by Naman Bhalla on 2019-04-01.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <utility>

using namespace std;

int main(){
    int n{}, now{};
    cin >> n;
    int c_100{}, c_200{};

    for(int i{}; i < n; ++i){
        cin >> now;
        if(now == 100){
            ++c_100;
        } else {
            ++c_200;
        }
    }

    if(c_100 % 2 == 0 and c_200 % 2 == 0){
        cout << "YES" << endl;
    } else if (c_200 % 2 != 0 and c_100 >= 2 and (c_100 - 2) % 2 == 0){
        cout << "YES" << endl;
    } else {
        cout <<"NO" << endl;
    }
    return 0;
}