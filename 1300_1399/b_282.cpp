//
// Created by Naman Bhalla on 2019-04-08.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>
#include <utility>
#include <cmath>
using namespace std;

int main(){
    int n, cur_a{}, cur_g{}, now_a{}, now_g{};
    cin >> n;

    string answer{};
    for(int i{1}; i <= n; ++i){
        cin >> now_a >> now_g;
        if(abs(cur_g - (cur_a + now_a)) <= 500){
            cur_a += now_a;
            answer.push_back('A');
        } else{
            cur_g += now_g;
            answer.push_back('G');
        }
    }

    if(abs(cur_a - cur_g) <= 500){
        cout << answer << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}