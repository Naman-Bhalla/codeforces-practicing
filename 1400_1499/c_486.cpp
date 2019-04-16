//
// Created by Naman Bhalla on 2019-04-15.
//

#include <cstdio>
#include <algorithm>
#include <cstring>
#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int main(){
    int n, p;
    string s;
    cin >> n >> p >> s;
    --p;
    if (p >= n/2) p = n-p-1;

    int left_most{n}, right_most{-1};

    int answer{0};
    for(int i{0}; i < n/ 2; ++i){
        if(s[i] != s[n - 1 - i]){
            left_most = min(left_most, i);
            right_most = max(right_most, i);
            answer += min(abs(s[i] - s[n - i - 1]), 26 - abs(s[i] - s[n - i - 1]));
        }
    }

    if(left_most == n){
        cout << 0 << endl;
        return 0;
    }

    cout << answer + (right_most - left_most) + min(abs(p - left_most), abs(p - right_most)) << endl;
    return 0;
}