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
int a[100005];

int main(){
    int n;
    cin >> n;

    memset(a, 0, sizeof a);

    for(int i{0}; i < n; ++i){
        cin >> a[i];
    }

    int count{0};
    int total_c{};

    for(int i{0}; i < n; ++i){
        if(a[i] == i){
            total_c += 1;
        } else if(a[a[i]] == i){
            count = 2;
        }
    }

    if(count == 0 and total_c <= n - 2){
        count = 1;
    }

    cout << count + total_c <<endl;

    return 0;
}