//
// Created by Naman Bhalla on 2019-04-15.
//

#include <cstdio>
#include <cstring>
#include <algorithm>
#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int counts[100005];
int a[100005];
int main(){
    memset(counts, 0, sizeof counts);
    memset(a, 0, sizeof a);
    int n, k;
    cin >> n >> k;

    for(int i{1}; i <= n; ++i){
        cin >> a[i];
    }

    int l{1}, r{1};
    int curr_dist{};

    while(r <= n){
        if(counts[a[r]] == 0){
            ++curr_dist;
        }
        ++counts[a[r]];
        while(l < r){
            if(counts[a[l]] == 1){
                break;
            }
            --counts[a[l]];
            ++l;
        }

        if(curr_dist == k){
            cout << l << " " << r << endl;
            return 0;
        }
        ++r;

    }

    cout << -1 << " " << -1 << endl;

    return 0;
}