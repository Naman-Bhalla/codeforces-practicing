//
// Created by Naman Bhalla on 2019-04-08.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <utility>
#include <cstring>

using namespace std;

int a[100005];

int main(){
    int n, t;
    memset(a, 0, sizeof a);

    cin >> n >> t;

    for(int i{1}; i <= n; ++i){
        cin >> a[i];
        a[i] += a[i - 1];
    }

    int l{1}, r{1};
    int ans{0};
    while(r <= n){
        if(a[r] - a[l - 1] > t){
            ++l;
        }  else {
            ++r;
        }
        ans = max(ans, r - l);
    }

    cout << ans << endl;

    return 0;
}