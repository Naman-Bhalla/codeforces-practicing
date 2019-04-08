//
// Created by Naman Bhalla on 2019-04-08.
//

#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>
#include <iostream>

using namespace std;

vector< int > counts{};
vector< long long int > nums{};
vector< int > vals{};

int main(){
    int n, q, st, en;
    long long int now;
    cin >> n >> q;
    for(int i{1}; i <= n; ++i){
        cin >> now;
        nums.emplace_back(now);
    }

    counts.resize(n + 2);

    for(int i{1}; i <= q; ++i){
        cin >> st >> en;
        ++counts[st];
        --counts[en + 1];
    }

    int curr_count{};
    for(auto count: counts){
        curr_count += count;
        if(curr_count > 0){
            vals.emplace_back(curr_count);
        }
    }

    sort(vals.rbegin(), vals.rend());
    sort(nums.rbegin(), nums.rend());

    int i{};
    long long int answer{};
    for(auto val: vals){
        answer += (val * nums[i]);
        ++i;
    }

    cout << answer << endl;


    return 0;
}