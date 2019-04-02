//
// Created by Naman Bhalla on 2019-04-02.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>
#include <utility>

using namespace std;

int arrays[8];

int main(){
    int n{}, now{};
    cin >> n;
    memset(arrays, 0, sizeof arrays);

    for(int i{}; i < n; ++i){
        cin >> now;
        if(now == 0 or now == 5 or now == 7){
            cout << -1 << endl;
            return 0;
        }
        ++arrays[now];
    }

    if(arrays[1] != arrays[2] + arrays[3] or arrays[3] > arrays[6] or arrays[4] + arrays[6] - arrays[3] != arrays[2]){
        cout << - 1 << endl;
        return 0;
    }

    while(arrays[3] > 0){
        cout << 1 << " " << 3 << " " << 6 << endl;
        --arrays[1];
        --arrays[3];
        --arrays[6];
    }

    while(arrays[2] > 0 and arrays[4] > 0){
        cout << 1 << " " << 2 << " " << 4 << endl;
        --arrays[1];
        --arrays[2];
        --arrays[4];
    }

    while(arrays[2] > 0){
        cout << 1 << " " << 2 << " " << 6 << endl;
        --arrays[1];
        --arrays[2];
        --arrays[6];
    }

    return 0;
}