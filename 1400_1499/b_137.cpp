//
// Created by Naman Bhalla on 2019-04-10.
//

#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>
#include <iostream>
#include <utility>

using namespace std;

bool a[5005];
int main(){
    int n, now;
    memset(a, 0, sizeof a);
    cin >> n;
    for(int i{1}; i <= n; ++i){
        cin >> now;
        a[now] = true;
    }
    int answer{};
    for(int i{1}; i <= n; ++i){
        if(not a[i]){
            ++answer;
        }
    }

    cout << answer << endl;
    return 0;
}