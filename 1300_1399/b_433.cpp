//
// Created by Naman Bhalla on 2019-04-01.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <utility>
#include <cstring>

using namespace std;

vector< int > vals{0};
vector< long long int > sums{0};
vector< long long int > sorted_sums{0};

int main(){
    int n{}, now{};
    cin >> n;
    for(int i{1}; i <= n; ++i){
        cin >> now;
        vals.push_back(now);
    }

    for(int i{1}; i <= n; ++i){
        sums.push_back(sums[i - 1] + vals[i]);
    }

    sort(vals.begin(), vals.end());

    for(int i{1}; i <= n; ++i){
        sorted_sums.push_back(sorted_sums[i - 1] + vals[i]);
    }

    int m{}, type{}, l{}, r{};
    cin >> m;
    for(int i{}; i < m; ++i){
        cin >> type >> l >> r;
        if(type == 1){
            cout << sums[r] - sums[l - 1] << endl;
        } else {
            cout << sorted_sums[r] - sorted_sums[l - 1] << endl;
        }
    }


    return 0;
}