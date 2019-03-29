//
// Created by Naman Bhalla on 2019-03-29.
//

#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

int main(){
    int n{}, en{}, ex{}, maxm{0}, cap_now{0};
    cin >> n;

    for(int i{}; i < n; ++i){
        cin >> ex >> en;
        cap_now -= ex;
        cap_now += en;
        maxm = max(maxm, cap_now);
    }

    cout << maxm << endl;

    return 0;
}