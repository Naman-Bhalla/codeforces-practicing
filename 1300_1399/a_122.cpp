//
// Created by Naman Bhalla on 2019-03-31.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <utility>

using namespace std;

bool is_lucky(int num){
    int now{};
    while(num){
        now = num % 10;
        if(now != 4 and now != 7){
            return false;
        }
        num /= 10;
    }

    return true;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n{};
    cin >> n;

    if(is_lucky(n)){
        cout << "YES" << endl;
        return 0;
    }

    for(int i{1}; i<= n/2; ++i){
        if(is_lucky(i) and n % i == 0){
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;

    return 0;
}