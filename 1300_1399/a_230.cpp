//
// Created by Naman Bhalla on 2019-03-30.
//

#include <cstdio>
#include <algorithm>
#include <vector>
#include <utility>
#include <iostream>

using namespace std;

int main(){
    int s{}, n{}, x{}, y{};

    cin >> s >> n;

    vector< pair< int, int > > vii;

    for(int i{}; i < n; ++i){
        cin >> x >> y;
        vii.push_back(make_pair(x, y));
    }

    sort(vii.begin(), vii.end());

    for(auto pairs: vii){
        if(s <= pairs.first){
            cout << "NO" << endl;
            return 0;
        }
        s += pairs.second;
    }

    cout << "YES" << endl;

    return 0;

}