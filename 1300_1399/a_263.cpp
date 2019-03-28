//
// Created by Naman Bhalla on 2019-03-28.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    int n{}, ans{};

    for(int i{}; i < 5; ++i){
        for(int j{}; j < 5; ++j){
            cin >> n;
            if(n == 1){
                ans = abs(j - 2) + abs(i- 2);
                break;
            }
        }
    }

    cout << ans << endl;

    return 0;
}