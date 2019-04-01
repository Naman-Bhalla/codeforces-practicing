//
// Created by Naman Bhalla on 2019-04-01.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <cstring>

using namespace std;
bool a[3001];

int main(){
    int n{}, now{};
    cin >> n;

    memset(a, 0, sizeof a);

    for(int i{1}; i <= n; ++i){
        cin >> now;
        a[now] = true;
    }

    for(int i{1}; i <= n; ++i){
        if(not a[i]){
            cout << i << endl;
            return 0;
        }
    }

    cout << n + 1 << endl;

    return 0;
}