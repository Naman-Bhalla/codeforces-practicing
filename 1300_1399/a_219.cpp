//
// Created by Naman Bhalla on 2019-04-01.
//

#include <cstdio>
#include <algorithm>
#include <iostream>
#include <cstring>
#include <vector>

int counting[26], k;

using namespace std;

string s;
int main(){
    cin >> k;
    memset(counting, 0 , sizeof counting);
    cin >> s;
    for(int i{}; i < s.size(); ++i){
        ++counting[s[i] - 'a'];
    }

    string answer{};

    for(int i{}; i < 26; ++i){
        if(counting[i] % k != 0){
            cout << -1 << endl;
            return 0;
        }
        for(int j{}; j < counting[i]/k; ++j){
            answer.push_back('a' + i);
        }
    }
    for(int i{}; i < k; ++i){
        cout << answer;
    }
     cout << endl;
    return 0;
}