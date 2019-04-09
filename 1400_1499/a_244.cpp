//
// Created by Naman Bhalla on 2019-04-09.
//

#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>
#include <utility>

using namespace std;

bool given[909];
int req[31];
int main(){
    memset(given, 0, sizeof given);
    memset(req, 0, sizeof req);

    int n, k, now;
    cin >> n >> k;

    for(int i{1}; i <= k; ++i){
        cin >> now;
        given[now] = true;
        req[i] = now;
    }
    int last_not_given{1};
    for(int i{1}; i <= k; ++i){
        cout << req[i] << " ";
        for(int j{1}; j <= n - 1; ++j){
            while(given[last_not_given])
                ++last_not_given;
            cout << last_not_given << " ";
            ++last_not_given;
        }
        cout << endl;
    }
    return 0;
}