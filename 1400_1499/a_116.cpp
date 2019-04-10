//
// Created by Naman Bhalla on 2019-04-10.
//

#include <cstdio>
#include <algorithm>
#include <iostream>
#include <cstring>
#include <vector>
#include <utility>

using namespace std;

int main(){
    int maxm_c{-1}, current_p{0};
    int n, enter_n, exit_n;
    cin >> n;
    for(int i{1}; i <= n; ++i){
        cin >> exit_n >> enter_n;
        current_p += (enter_n- exit_n);
        maxm_c = max(maxm_c, current_p);
    }
    
    cout << maxm_c << endl;
    return 0;
}