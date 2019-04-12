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

int main(){
    int n;
    cin >> n;
    int last_h{-1}, last_m{-1};
    int curr_c{1};
    int curr_h{}, curr_m{};
    int maxm_c{0};
    for(int i{1}; i <= n; ++i){
        cin >> curr_h >> curr_m;
        if(curr_h == last_h and curr_m == last_m){
            ++curr_c;
        } else {
            curr_c = 1;
            last_h = curr_h;
            last_m = curr_m;
        }
        maxm_c = max(maxm_c, curr_c);
    }

    cout << maxm_c << endl;
    return 0;
}