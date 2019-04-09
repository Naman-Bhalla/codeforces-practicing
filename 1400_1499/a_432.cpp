//
// Created by Naman Bhalla on 2019-04-08.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <utility>
#include <cstring>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    int now, count{};

    for(int i{1}; i <= n; ++i){
        cin >> now;
        if(now + k <= 5){
            ++count;
        }
    }

    cout << count / 3 << endl;

    return 0;
}