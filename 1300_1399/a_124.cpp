//
// Created by Naman Bhalla on 2019-03-30.
//

#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
    int n{}, a{}, b{};
    cin >> n >> a >> b;

    cout << min(n - a, b + 1) << endl;

    return 0;
}