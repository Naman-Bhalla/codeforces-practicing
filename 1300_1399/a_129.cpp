//
// Created by Naman Bhalla on 2019-03-28.
//

#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

int main(){

    int n{}, now{}, even_count{}, odd_count{};

    cin >> n;

    for(int i{}; i < n; ++i){
        cin >> now;
        if(now % 2){
            ++odd_count;
        } else{
            ++even_count;
        }
    }

    if(odd_count % 2){
        cout << odd_count << endl;
    } else {
        cout << even_count << endl;

    }
    return 0;
}