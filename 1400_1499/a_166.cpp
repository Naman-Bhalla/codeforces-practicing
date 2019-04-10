//
// Created by Naman Bhalla on 2019-04-10.
//

#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
#include <utility>

using namespace std;

vector< pair< int, int > > vpp{};
int main(){
    int n, k;
    cin >> n >> k;
    int p, t;
    for(int i{1}; i <= n; ++i){
        cin >> p >> t;
        vpp.emplace_back(p, -t);
    }

    sort(vpp.rbegin(), vpp.rend());

    --k;
//    int l{k}, r{k};
//    while(l >= 0 and vpp[l] == vpp[k]){
//        --l;
//    }
//    while(r < n and vpp[r] == vpp[k]){
//        ++r;
//    }

//    auto l{lower_bound(vpp.begin(), vpp.end(), vpp[k])};
//    auto r{upper_bound(vpp.begin(), vpp.end(), vpp[k])};
    auto def{equal_range(vpp.rbegin(), vpp.rend(), vpp[k])};
    cout << def.second - def.first<< endl;
    return 0;
}