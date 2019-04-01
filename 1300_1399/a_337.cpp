//
// Created by Naman Bhalla on 2019-04-01.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>
//#include <cstring>

using namespace std;

int n, m, now, minm;
vector< int > f{};

int main(){
    cin >> n >> m;

    for(int i{}; i < m; ++i){
        cin >> now;
        f.push_back(now);
    }

    sort(f.begin(), f.end());

    minm = 50001;

    int i{0};
    for(int j{n - 1}; j < m; ++j){
        minm = min(f[j] - f[i], minm);
        ++i;
    }

    cout << minm << endl;

    return 0;
}