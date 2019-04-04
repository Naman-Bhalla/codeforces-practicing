//
// Created by Naman Bhalla on 2019-04-04.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>
#include <utility>

using namespace std;
int a[102];
int main(){
    int n;
    memset(a, 0, sizeof a);
    cin >> n;

    for(int i{1}; i <= n; ++i){
        cin >> a[i];
        if(a[i] == 1){
            a[i] = -1;
        } else {
            a[i] = 1;
        }
    }

    int in_1_c{};
    for(int i{1}; i <= n; ++i){
        if(a[i] == -1)
            ++in_1_c;
    }

    int maxm{0};
    int curr_sum{in_1_c};
    for(int i{1}; i <= n; ++i){
        curr_sum += a[i];
        if(curr_sum > maxm){
            maxm = curr_sum;
        }
        if(curr_sum < in_1_c){
            curr_sum = in_1_c;
        }
    }

    cout << maxm << endl;
    return 0;
}