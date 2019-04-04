//
// Created by Naman Bhalla on 2019-04-03.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <utility>

using namespace std;

int ns[100005];
int n, s, t;

int main(){
    cin >> n >> s >> t;

    for(int i{1}; i <= n; ++i){
        cin >> ns[i];
    }

    int now{ns[s]};
    int count{1};

    if(s == t){
        cout << 0 << endl;
        return 0;
    }

    while(not(now == s or now == t)){
        now = ns[now];
        ++count;
    }


    if(now == t){
        cout << count << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}