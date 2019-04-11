//
// Created by Naman Bhalla on 2019-04-11.
//

#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    long double n, m;
    cin >> m >> n;

    long double answer{};

    for(int i{1}; i <= m; ++i){
        answer += (i * (pow(i / m, n) - pow((i - 1)/ m, n)));
    }

    cout << fixed << setprecision(12) << answer << endl;
    return 0;
}