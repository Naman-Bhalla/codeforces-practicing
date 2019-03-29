//
// Created by Naman Bhalla on 2019-03-29.
//

#include <algorithm>
#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int n{}, k {}, f{}, t{}, maxm{static_cast<int>(-2e9)};

    cin >> n >> k;

    for(int i{}; i < n; ++i){
        cin >> f >> t;
        if(t > k){
            maxm = max(maxm, (f - (t - k)));
        } else {
            maxm = max(maxm, f);
        }
    }

    cout << maxm << endl;


    return 0;
}