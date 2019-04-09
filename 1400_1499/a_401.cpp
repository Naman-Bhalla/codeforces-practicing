//
// Created by Naman Bhalla on 2019-04-09.
//

#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
#include <utility>

using namespace std;

int main(){
    int n, x, sum_n{}, now;
    cin >> n >> x;

    for(int i{1}; i <= n; ++i){
        cin >> now;
        sum_n += now;
    }

    sum_n = abs(sum_n);
    int answer{};

    answer =sum_n / x;
    if(sum_n % x != 0){
        ++answer;
    }

    cout << answer << endl;
    return 0;
}