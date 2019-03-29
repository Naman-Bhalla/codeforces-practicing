//
// Created by Naman Bhalla on 2019-03-29.
//

#include <algorithm>
#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int n{}, x{0};
    cin >> n;
    string now{};

    for(int i{}; i < n; ++i){
        cin >> now;
        if(now.at(1) == '-'){
            --x;
        } else{
            ++x;
        }
    }

    cout << x << endl;

    return 0;
}