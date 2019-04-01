//
// Created by Naman Bhalla on 2019-04-01.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>

using namespace std;
vector< long long int > all_vals{};
int main(){
    long long int l{}, r{};
    long long int val{};
    cin >> l >> r;
    // Generate all Lucky Numbers

    for(int i{1}; i <= 10; ++i ){// Lucky Numbers of Length i
        for(int j{0}; j < (1 << i); ++j){//All possible bit combs
            val = 0;
            for(int k{}; k < i; ++k){//Each bit in k
                val *= 10;
                if((j & (1 << k))){
                    val += 4;
                } else {
                    val += 7;
                }
            }
            all_vals.push_back(val);
        }
    }


    long long int answer{}, count{};
    sort(all_vals.begin(), all_vals.end());

    while(l <= r){
        val = *lower_bound(all_vals.begin(), all_vals.end(), l);
        if(val >= r){
            count = r - l + 1;
        } else {
            count = val - l + 1;
        }
        answer += (val * count);
        l = val + 1;
    }

    cout << answer << endl;

    return 0;
}