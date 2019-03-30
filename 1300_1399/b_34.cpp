//
// Created by Naman Bhalla on 2019-03-30.
//

#include <cstdio>
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n{}, m{}, now{}, ans{}, taken{}, j{};
    cin >> n >> m;
    vector<int> v{};
    for(int i{}; i < n; ++i){
        cin >> now;
        if(now < 0)
            v.push_back(now);
    }
    sort(v.begin(), v.end());

    while(taken < m and j < v.size()){
        ans += v[j];
        ++j;
        ++taken;
    }

    cout << -ans << endl;

    return 0;
}