//
// Created by Naman Bhalla on 2019-03-30.
//

#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main(){


    int n{}, k{};
    cin >> n >> k;

    for(int i{}; i < k; ++i){
        cout << (n - i) << " ";
    }

    for(int i{1}; i <= n - k; ++i){
        cout << i << " ";
    }

    cout << endl;

    return 0;
}