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

vector< pair< int, int > > dragons{};
int main(){
    int s, n, x, y;
    cin >> s >> n;

    for(int i{1}; i <= n; ++i){
        cin >> x >> y;
        dragons.emplace_back(x, y);
    }

    sort(dragons.begin(), dragons.end());

    for(int i{}; i < n; ++i){
        if(s > dragons[i].first){
            s += dragons[i].second;
        } else {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
    return 0;
}