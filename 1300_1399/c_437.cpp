//
// Created by Naman Bhalla on 2019-04-02.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>
#include <queue>

using namespace std;
int v[1001];

int main(){
    int n, m, a, b;

    cin >> n >> m;
    memset(v, 0, sizeof v);

    for(int i{}; i < n; ++i){
        cin >> v[i + 1];
    }
    int answer{};

    for(int i{}; i < m; ++i){
        cin >> a >> b;
        answer += min(v[a], v[b]);
    }

    cout << answer << endl;

    return 0;
}