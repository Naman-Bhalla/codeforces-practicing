//
// Created by Naman Bhalla on 2019-04-05.
//

#include <cstdio>
#include <algorithm>
#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;
//int dp[4][1000000009];
const int inf{1000000009};
int main(){
    int a, b;
    cin >> a >> b;
    int a2{}, a3{}, a5{};
    int b2{}, b3{}, b5{};

    while(a and a % 2 == 0){
        ++a2;
        a /= 2;
    }

    while(a and a % 3 == 0){
        ++a3;
        a /= 3;
    }
    while(a and a % 5 == 0){
        ++a5;
        a /= 5;
    }

    while(b and b % 2 == 0){
        ++b2;
        b /= 2;
    }

    while(b and b % 3 == 0){
        ++b3;
        b /= 3;
    }
    while(b and b % 5 == 0){
        ++b5;
        b /= 5;
    }

    if(a == b){
        cout << abs(a2 - b2) + abs(a3 - b3) + abs(a5 - b5) << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}