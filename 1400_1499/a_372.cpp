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

vector< int > s{};
bool marked[500005];
int main(){
    int n;
    memset(marked, 0, sizeof marked);
    cin >> n;
    int now;
    for(int i{1}; i <= n; ++i){
        cin >> now;
        s.emplace_back(now);
    }

    sort(s.begin(), s.end());

    int l{n/ 2 - 1}, r{n - 1};
    int rem{n};
    while(l >= 0 and r >= n / 2){
        if(s[r] >= 2 * s[l]){
            --l;
            --r;
            --rem;
        } else {
            --l;
        }
    }

    cout << rem << endl;
    return 0;
}