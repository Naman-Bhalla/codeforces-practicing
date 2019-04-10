//
// Created by Naman Bhalla on 2019-04-10.
//

#include <cstdio>
#include <algorithm>
#include <iostream>
#include <vector>
#include <utility>
#include <cstring>

using namespace std;
vector< int > nums{};

int main(){
    int n{};
    cin >> n;
    int num;
    for(int i{1}; i <= 3; ++i){
        for(int j{0}; j < (1 << i); ++j){
            num = 0;
            for(int k{0}; k < i; ++k){
                num *= 10;
                if(j & (1 << k)){
                    num += 4;
                } else {
                    num += 7;
                }
            }
            nums.emplace_back(num);
        }
    }

    for(auto &num: nums){
        if(n % num == 0){
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}