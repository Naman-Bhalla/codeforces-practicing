//
// Created by Naman Bhalla on 2019-04-12.
//

#include <cstdio>
#include <algorithm>
#include <cstring>
#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int main(){
    int n, x;
    cin >> n >> x;
    int now;
    int e_c{}, g_c{}, l_c{};
    for(int i{1}; i <= n; ++i){
        cin >> now;
        if(now < x){
            ++l_c;
        } else if(now > x){
            ++g_c;
        } else {
            ++e_c;
        }
    }

    int answer{0};
    if(e_c == 0){
        answer = 1;
        e_c = 1;
    }

    if(l_c < g_c){
        answer += max(0, g_c - l_c - (e_c - 1) - 1);
        cout << answer << endl;
    } else if(l_c > g_c){
        answer += max(0, l_c - g_c - (e_c - 1));
        cout << answer << endl;
    } else {
        cout << answer << endl;
    }
    return 0;
}