//
// Created by Naman Bhalla on 2019-04-10.
//

#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>
#include <utility>
#include <iostream>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    long long int prev{1}, now, ans{};
    for(int i{}; i < m; ++i){
        cin >> now;
        if(now < prev){
            ans += n - (prev - now);
        } else {
            ans += (now - prev);
        }
        prev = now;
    }

    cout << ans << endl;
    return 0;
}