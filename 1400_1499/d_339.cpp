//
// Created by Naman Bhalla on 2019-04-14.
//

#include <cstdio>
#include <cstring>
#include <algorithm>
#include <iostream>
#include <vector>
#include <utility>

using namespace std;
long long int N{1 << 17};
long long int t[2 * (1 << 17)];

void build() {
    int cur{1};
    for (long long int i{N}; i > 0; --i) {
        if(cur){
            t[i] = t[i << 1] | t[(i << 1) + 1];
        } else {
            t[i] = t[i << 1] ^ t[(i << 1) + 1];
        }

        if((i & (i - 1)) == 0)
            cur ^= 1;
    }
}

void modify(long long int i, long long int value){
    t[i + N] = value;
    i = i + N;
    int cur = 1;
    i >>= 1;
    while(i){
        if(cur){
            t[i] = t[i << 1] | t[(i << 1) + 1];
        } else {
            t[i] = t[i << 1] ^ t[(i << 1) + 1];
        }
        i >>= 1;
        cur ^= 1;
    }
}
int main(){
    long long int n, m, p, b;
    cin >> n >> m;
    n = (1 << n);
    for(long long int i{0}; i < n; ++i){
        cin >> t[n + i];
    }
    N = n - 1;
    build();

    for(int i{0}; i < m; ++i){
        cin >> p >> b;
        modify(p, b);
        cout << t[1] << endl;
    }

    return 0;
}