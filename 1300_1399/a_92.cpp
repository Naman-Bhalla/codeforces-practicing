//
// Created by Naman Bhalla on 2019-03-29.
//

#include <algorithm>
#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n{}, m{};
    cin >> n >> m;

    m %= ((n * (1 + n)) >> 1);
    int i{1};

    for(; i <= n; ++i){
        m -= i;
        if(m < 0){
            m += i;
            break;
        }
    }

    cout << m << endl;
    return 0;
}