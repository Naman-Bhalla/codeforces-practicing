//
// Created by Naman Bhalla on 2019-04-10.
//

#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <numeric>

using namespace std;

vector< int > coins{};
int main(){
    int n{}, now;
    int total{};
    cin >> n;
    for(int i{1}; i <= n; ++i){
        cin >> now;
        total+= now;
        coins.emplace_back(now);
    }

    sort(coins.begin(), coins.end());

    int sum_till_now{};
    int items_now {};
    int target{total / 2};
    for(int i{static_cast<int>(coins.size() - 1)}; i >= 0; --i){
        ++items_now;
        sum_till_now += coins[i];
        if(sum_till_now > target)
            break;
    }

    cout << items_now << endl;

    return 0;
}