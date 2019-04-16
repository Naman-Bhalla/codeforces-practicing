//
// Created by Naman Bhalla on 2019-04-15.
//

#include <cstdio>
#include <algorithm>
#include <vector>
#include <utility>
#include <iostream>
#include <cstring>

using namespace std;

vector< int > nums{};
vector< long long int > sums{};
int main(){
    int n, q, now;
    cin >> n >> q;
    for(int i{1}; i <= n; ++i){
        cin >> now;
        nums.emplace_back(now);
    }
    sort(nums.rbegin(), nums.rend());
    int l, r;
    sums.assign(n + 1, 0);
    for(int i{1}; i <= q; ++i){
        cin >> l >> r;
        --l;
        --r;
        sums[l] += 1;
        sums[r + 1] -= 1;
    }
    long long int curr_sum{sums[0]};
    for(int i{1}; i < n; ++i){
        curr_sum += sums[i];
        sums[i] = curr_sum;
    }
    sort(sums.rbegin(), sums.rend());
    long long int i{}, answer{};
    for(auto n: nums){
        answer += n * sums[i];
        ++i;
    }

    cout << answer << endl;
    return 0;
}