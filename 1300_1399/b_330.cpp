//
// Created by Naman Bhalla on 2019-04-04.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>
#include <utility>

using namespace std;
bool ns[1003];
int main(){
    int n, m, u, v;
    cin >> n >> m;
    memset(ns, 0, sizeof ns);

    for(int i{}; i < m; ++i){
        cin >> u >> v;
        ns[u] = true;
        ns[v] = true;
    }

    int ans_n;
    for(int i{1}; i <= n; ++i){
        if(not ns[i]){
            ans_n = i;
            break;
        }
    }

    cout << n - 1<< endl;
    for(int i{1}; i<= n; ++i){
        if(i != ans_n){
            cout << ans_n << " " << i << endl;
        }
    }

    return 0;
}