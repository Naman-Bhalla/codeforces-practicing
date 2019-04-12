//
// Created by Naman Bhalla on 2019-04-12.
//

#include <cstdio>
#include <algorithm>
#include <cstring>
#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int main(){
    long long int n, r, avg;
    cin >> n >> r >> avg;

    long long int reqd{n * avg};
    vector< pair< long long int, long long int > > vpp{};
    long long int have{};
    long long int a, b;
    for(int i{1}; i <= n; ++i){
        cin >> a >> b;
        have += a;
        vpp.emplace_back(b, r - a);
    }

    sort(vpp.begin(), vpp.end());
    long long int add{};
    int i{};
    while(have < reqd){
        add += min(vpp[i].second, reqd - have) * vpp[i].first;
        have += min(vpp[i].second, reqd - have);

        ++i;
    }

    cout << add << endl;
    return 0;
}