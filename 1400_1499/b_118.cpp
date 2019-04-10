//
// Created by Naman Bhalla on 2019-04-10.
//

#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>
#include <utility>

using namespace std;

void print(int n, int k){
    for(int i{}; i < (2 * (n - k)); ++i){
        cout << " ";
    }

    for(int i{0}; i <= k - 1; ++i){
        cout << i << " ";
    }

    cout << k;

    for(int i{k - 1}; i >= 0; --i){
        cout << " " << i;
    }
    cout << endl;
}

int main(){
    int n;
    cin >> n;

    for(int i{0}; i <= n; ++i ){
        print(n, i);
    }

    for(int i{n - 1}; i >= 0; --i){
        print(n, i);
    }

    return 0;
}