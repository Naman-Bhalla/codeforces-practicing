//
// Created by Naman Bhalla on 2019-04-10.
//

#include <cstdio>
#include <cstring>
#include <algorithm>
#include <iostream>
#include <vector>
#include <utility>

using namespace std;

vector< pair< int, int > > v{};
int main(){
    int x, y, a, b;
    cin >> x >> y >> a >> b;
    for(int i{a}; i <= x; ++i){
        for(int j{b}; j <= min(y, i - 1); ++j){
            v.emplace_back(i, j);
        }
    }

    cout << v.size() << endl;
    for(auto &places: v){
        cout << places.first << " " << places.second << endl;
    }
    return 0;
}