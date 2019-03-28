//
// Created by Naman Bhalla on 2019-03-28.
//

#include <algorithm>
#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int n{}, n_sq{}, p{1};
    cin >> n;
    n_sq = n * n;

    for(int i{}; i < n; ++i){
        for(int j{}; j < n / 2; ++j){
            cout << p << " " << n_sq - p +1 << " ";
            ++p;
        }
        cout << endl;
    }

    return 0;
}