//
// Created by Naman Bhalla on 2019-04-08.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <utility>
#include <cstring>

using namespace std;
const int mod{1000000007};

int main(){
    int n;
    cin >> n;

    long long int present_d{1};
    long long int present_abc{0};
    long long int temp{};

    for(int i{1}; i <= n; ++i){
        temp = present_d;
        present_d = 3 * present_abc;
        present_abc = temp + 2 * present_abc;
        present_d %= mod;
        present_abc %= mod;
    }

    cout << present_d << endl;
    return 0;
}