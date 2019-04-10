//
// Created by Naman Bhalla on 2019-04-10.
//

#include <cstdio>
#include <algorithm>
#include <cstring>
#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int chars[26];
int main(){
    memset(chars, 0, sizeof chars);
    int k;
    cin >> k;
    string s;
    cin >> s;
    for(auto &chaars: s){
        ++chars[chaars - 'a'];
    }

    string answer{};
    for(int i{}; i < 26; ++i){
        if(chars[i] % k != 0){
            cout << - 1 << endl;
            return 0;
        }
        for(int j{}; j < chars[i] / k; ++j){
            answer.push_back(i + 'a');
        }
    }
    for(int i{}; i < k; ++i)
        cout << answer;
    cout << endl;

    return 0;
}