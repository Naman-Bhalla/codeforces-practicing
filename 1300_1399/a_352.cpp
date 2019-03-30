//
// Created by Naman Bhalla on 2019-03-30.
//

#include <algorithm>
#include <cstdio>
#include <iostream>

using namespace std;

int main(){
    int n{}, number_five{}, number_zero{}, now{};

    cin >> n;

    for(int i{}; i <n; ++i){
        cin >> now;
        if(now == 5){
            ++number_five;
        } else{
            ++number_zero;
        }
    }

    if(number_zero == 0){
        cout << -1 << endl;
        return 0;
    }

    if(n < 10){
        cout << 0 << endl;
        return 0;
    }

    if(number_five < 9){
        cout << 0 << endl;
        return 0;
    }

    for(int i{}; i < 9 * (number_five / 9); ++i){
        cout << 5;
    }
    for(int i{}; i < number_zero; ++i){
        cout << 0;
    }

    cout << endl;


    return 0;
}