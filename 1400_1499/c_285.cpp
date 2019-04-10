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
vector< int > v{};
int main(){
    int n{}, now;
    cin >> n;
    for(int i{}; i < n; ++i){
        cin >> now;
        v.emplace_back(now);
    }

    sort(v.begin(),v.end());
    long long int answer{};
    for(int i{}; i < n; ++i){
        answer += (abs(i + 1 - v[i]));
    }

    cout << answer << endl;
    return 0;
}