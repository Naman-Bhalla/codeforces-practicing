//
// Created by Naman Bhalla on 2019-04-01.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>

using namespace std;
vector< int > vals{};

int main(){
    int n{}, now{};
    cin >> n;

    for(int i{}; i < n; ++i){
        cin >> now;
        vals.push_back(now);
    }

    sort(vals.begin(), vals.end());

    cout << vals.at(vals.size() - 1) << " ";
    for(int i{1}; i < vals.size() - 1; ++i){
        cout << vals.at(i) << " ";
    }

    cout << vals.at(0) << endl;

    return 0;
}