//
// Created by Naman Bhalla on 2019-03-30.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int main(){
    int n{}, x{}, y{};
    cin >> n >> x >> y;
    cout << max(0, (int)ceil(static_cast<double>(y * n) / 100) - x) << endl;

    return 0;
}