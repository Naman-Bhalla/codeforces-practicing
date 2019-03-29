//
// Created by Naman Bhalla on 2019-03-29.
//

#include <algorithm>
#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n{}, ans{};
    char prev{}, next{};

    cin >> n;
    for(int i{}; i < n; ++i){
        scanf(" %c", &next);
        if(next == prev){
            ++ans;
        }
        prev = next;
    }

    cout << ans << endl;

    return 0;
}