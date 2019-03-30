//
// Created by Naman Bhalla on 2019-03-30.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int t{}, a{};
    cin >> t;
    for(int i{}; i < t; ++i){
        cin >> a;
        if((360 % (180 - a)) == 0){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}