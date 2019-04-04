//
// Created by Naman Bhalla on 2019-04-04.
//

#include <cstdio>
#include <algorithm>
#include <iostream>
#include <cstring>
#include <vector>
#include <utility>

using namespace std;
int a[102];
int b[102];
bool opened[102];

int main(){
    memset(a, 0, sizeof a);
    memset(b, 0, sizeof b);
    memset(opened, 0, sizeof opened);

    int n;
    cin>> n;
    for(int i{1}; i <= n; ++i){
        cin >> a[i] >> b[i];
    }

    for(int i{1}; i <= n; ++i){
        for(int j{1}; j <= n; ++j){
            if(i != j and b[j] == a[i]){
                opened[i] = true;
                break;
            }
        }
    }

    int unopened{0};
    for(int i{1}; i <= n; ++i){
        if(not opened[i]){
            ++unopened;
        }
    }

    cout << unopened << endl;

    return 0;
}