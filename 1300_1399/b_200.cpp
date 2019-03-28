//
// Created by Naman Bhalla on 2019-03-28.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <iomanip>

using namespace std;

int main(){
    int n{}, now {}, add{};

    cin >> n;

    for(int i{}; i < n; ++i){
        cin >> now;
        add += now;
    }

    cout << 100 * (static_cast<float>(add)/ (n * 100)) << endl;


    return 0;
}