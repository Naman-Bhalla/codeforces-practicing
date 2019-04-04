//
// Created by Naman Bhalla on 2019-04-04.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <utility>
#include <cstring>

using namespace std;

int main(){
    int n{};
    cin >> n;

    cout << n;
    int n_2{(n << 1) - 1};
    for(int i{n + 1}; i <= n_2; ++i){
        cout << " " << i;
    }

    return 0;
}