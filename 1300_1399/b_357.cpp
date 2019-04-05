//
// Created by Naman Bhalla on 2019-04-05.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <utility>
#include <cstring>

using namespace std;

int colors[100005];
int main(){
    memset(colors, 0, sizeof colors);
    int n, m;
    cin >> n >> m;

    int a[4], c{}, d;
    memset(a, 0, sizeof a);
    for(int i{1}; i <= m; ++i){
        c = 0;
        for(int j{1}; j<= 3; ++j){
            cin >> a[j];
            if(colors[a[j]] != 0){
                c = colors[a[j]];
            }
        }

        d = 1;

        for(int j{1}; j <= 3; ++j){
            if(colors[a[j]] == 0){
                if(d == c){
                    ++d;
                }
                colors[a[j]] = d;
                ++d;
            }
        }
    }

    for(int i{1}; i <= n; ++i){
        cout << colors[i] << " ";
    }

    cout << endl;

    return 0;
}