//
// Created by Naman Bhalla on 2019-04-11.
//

#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
#include <utility>

using namespace std;

int a[100005];

int main(){
    int n, d;
    memset(a, 0, sizeof a);
    cin >> n >> d;

    for(int i{}; i < n; ++i){
        cin >> a[i];
    }

    long long int answer{};

    long long int r{};
    for(int i{}; i < n; ++i){
        while(r < n and a[r] - a[i] <= d)
            ++r;
        answer += (((r - i - 1) * (r - i - 2)) >> 1);
    }

    cout << answer << endl;
    return 0;
}