//
// Created by Naman Bhalla on 2019-03-30.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>

using namespace std;

void print_for(int k, int n){
    for(int i{}; i < abs(n - k); ++i){
        cout << "  ";
    }

    for(int i{}; i < k; ++i){
        cout << i << " ";
    }

    for(int i{k}; i > 0; --i){
        cout << i << " ";
    }

    cout << 0;

    cout << endl;
}
int main(){

    int n{};
    cin >> n;

    for(int i{}; i <= n; ++i){
        print_for(i, n);
    }

    for(int i{n - 1}; i >= 0; --i){
        print_for(i, n);
    }

    return 0;
}