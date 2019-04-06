//
// Created by Naman Bhalla on 2019-04-06.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>
#include <utility>

using namespace std;
vector< pair< int, int > > vpp{};

int main(){
    int n, a, b;
    cin >> n;

    for(int i{1}; i <=n; ++i){
        cin >> a >> b;
        vpp.emplace_back(a, b);
    }

    int current_time{0};

    sort(vpp.begin(), vpp.end());
    for(auto times: vpp){
        if(times.second >= current_time){
            current_time = times.second;
        } else {
            current_time = times.first;
        }
    }

    cout << current_time << endl;
    return 0;
}