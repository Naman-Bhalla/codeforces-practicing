//
// Created by Naman Bhalla on 2019-03-31.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>
#include <utility>

using namespace std;

int main(){
    int n{}, m{}, prev(1), now{};
    long long int answer {};
    cin >> n >> m;

    for(int i{}; i < m; ++i){
        cin >> now;
        if(now >= prev){
            answer += now - prev;
        } else {
            answer += ((n - prev) + (now));
        }

        prev = now;
    }

    cout<< answer << endl;

    return 0;
}