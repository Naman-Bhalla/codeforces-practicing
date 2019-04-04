//
// Created by Naman Bhalla on 2019-04-04.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>
#include <cmath>
using namespace std;
vector< int > a{};

int main(){
    int n, now;
    cin >> n;

    for(int i{}; i < n; ++i){
        cin >> now;
        a.emplace_back(now);
    }

    sort(a.begin(), a.end());
    long long int answer{};

    for(int i{}; i < n; ++i){
        answer += abs((i + 1) - a[i]);
    }

    cout << answer << endl;
    return 0;
}