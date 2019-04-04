//
// Created by Naman Bhalla on 2019-04-03.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>
#include <utility>

using namespace std;

long long int a[100005];
int main(){
    memset(a, 0, sizeof a);
    int n;
    cin >> n;

    for(int i{1}; i <= n; ++i){
        cin >> a[i];
    }

    int m, w, h;
    cin >> m;

    for(int i{1}; i <= m; ++i){
        cin >> w >> h;
        cout << max(a[1], a[w]) << endl;
        a[1] = max(a[1], a[w]) + h;
    }

    return 0;
}