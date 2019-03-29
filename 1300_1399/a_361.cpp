//
// Created by Naman Bhalla on 2019-03-29.
//

#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

int main(){
    int n{}, k{};
    cin >> n >> k;

    for(int i{}; i < n; ++i){
        for(int j{}; j < n; ++j){
            if(i == j){
                cout << k << " ";
            } else {
                cout << 0 << " ";
            }
        }
        cout << endl;
    }

    return 0;
}