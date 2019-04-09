//
// Created by Naman Bhalla on 2019-04-09.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <utility>
#include <cstring>

using namespace std;

int gifts[101];
int main(){
    memset(gifts, 0, sizeof gifts);

    int n, now;
    cin >> n;

    for(int i{1}; i <= n; ++i){
        cin >> now;
        gifts[now] = i;
    }

    for(int i{1}; i <= n; ++i){
        cout << gifts[i] << " ";
    }

    cout << endl;
    return 0;
}