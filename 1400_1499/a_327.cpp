//
// Created by Naman Bhalla on 2019-04-12.
//

#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>

using namespace std;
int a[101];
int main(){
    int n;
    memset(a, 0, sizeof a);
    cin >> n;

    int count_one{};
    for(int i{1}; i <= n; ++i){
        cin >> a[i];
        if(a[i] == 0){
            a[i] = 1;
        } else {
            ++count_one;
            a[i] = -a[i];
        }
    }

    int max_sum{0};
    int curr_sum{count_one};

    for(int i{1}; i <= n; ++i){
        curr_sum += a[i];
        max_sum = max(max_sum, curr_sum);
        if(curr_sum < count_one){
            curr_sum = count_one;
        }
    }

    cout << max_sum << endl;
    return 0;
}