//
// Created by Naman Bhalla on 2019-04-12.
//

#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>

using namespace std;

int a[100000];
bool seen[100005];
int main(){
    memset(a, 0 , sizeof a);
    memset(seen, 0, sizeof seen);
    int n, m;
    cin >> n >> m;

    for(int i{1}; i <= n; ++i){
        cin >> a[i];
    }

    for(int i{n}; i > 0; --i){
        if(not seen[a[i]]){
            seen[a[i]] = true;
            a[i] = 1 + a[i + 1];
        } else {
            a[i] = a[i+ 1];
        }
    }

    for(int i{1}; i <= m; ++i){
        cin >> n;
        cout << a[n] << endl;
    }

    return 0;
}