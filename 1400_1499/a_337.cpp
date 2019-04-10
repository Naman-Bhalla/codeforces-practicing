//
// Created by Naman Bhalla on 2019-04-10.
//

#include <cstdio>
#include <algorithm>
#include <cstring>
#include <iostream>
#include <vector>
#include <utility>

using namespace std;

vector< int > pieces{};
int main(){
    int n, m, now;
    cin >> n >> m;

    for(int i{1}; i<=m; ++i){
        cin >> now;
        pieces.emplace_back(now);
    }

    sort(pieces.begin(), pieces.end());
    int l{0}, r{n - 1};
    int least_cst{1001};

    while(r < m){
        least_cst = min(least_cst, pieces[r] - pieces[l]);
        ++l, ++r;
    }

    cout << least_cst << endl;
    return 0;
}