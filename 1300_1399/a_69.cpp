//
// Created by Naman Bhalla on 2019-03-29.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int x_now{}, y_now{}, z_now{};
    int x{}, y{}, z{};

    int n{};

    cin >> n;

    for(int i{}; i < n; ++i){
        cin >> x_now >> y_now >> z_now;
        x += x_now;
        y += y_now;
        z += z_now;
    }

    if(x == 0 and y == 0 and z == 0){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}