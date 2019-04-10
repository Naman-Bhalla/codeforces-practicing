//
// Created by Naman Bhalla on 2019-04-10.
//

#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>
#include <utility>
#include <iostream>

using namespace std;

int main(){
    int n{}, c_25{}, c_50{}, now{};
    cin >> n;
    for(int i{1}; i <= n; ++i){
        cin >> now;
        if(now == 50 && c_25 == 0){
            cout << "NO" << endl;
            return 0;
        } else if(now == 100 && (c_50 == 0 or c_25 == 0) && c_25 < 3){
            cout << "NO" << endl;
            return 0;
        }
        if(now == 25){
            ++c_25;
        } else if(now == 50){
            --c_25;
            ++c_50;
        } else {
            if(c_50) {
                --c_50;
                --c_25;
            }
            else{
                c_25 -= 3;
            }
        }
    }

    cout << "YES" << endl;
    return 0;
}