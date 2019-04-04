//
// Created by Naman Bhalla on 2019-04-03.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <utility>
#include <cstring>
#include <queue>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    string s1, s2;
    cin >> s1 >> s2;

    int o_p{}, o_m{}, g_p{}, g_m{}, g_u{};
    for(auto chars: s1){
        if(chars == '+'){
            ++o_p;
        } else{
            ++o_m;
        }
    }

    for(auto chars: s2){
        if(chars == '+'){
            ++g_p;
        } else if (chars == '-'){
            ++g_m;
        } else {
           ++g_u;
        }
    }

    if(g_p - o_p > 0 or g_m - o_m > 0){
        cout << setprecision(11) << 0.0 << endl;
        return 0;
    }

    int denom{static_cast<int>(pow(2, g_u))};

    double num{1};

    for(int i{o_p -g_p + 1}; i <= g_u; ++i){
        num *= i;
    }
    for(int i{1}; i <= g_u - o_p + g_p ; ++i){
        num /= i;
    }

    cout << setprecision(11) << num / denom  << endl;
    return 0;
}