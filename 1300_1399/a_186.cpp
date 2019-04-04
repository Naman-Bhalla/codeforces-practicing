//
// Created by Naman Bhalla on 2019-04-03.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>
#include <queue>

using namespace std;

int main(){
    int count[26];
    int count2[26];
    memset(count, 0, sizeof count);
    memset(count2, 0, sizeof count2);

    string s1, s2;
    cin >> s1 >> s2;

    if(s1.size() != s2.size()){
        cout << "NO" << endl;
        return 0;
    }

    for(auto chars: s1){
        ++count[chars - 'a'];
    }

    for(auto chars: s2){
        ++count2[chars - 'a'];
    }

    for(int i{}; i < 26; ++i){
        if(count[i] != count2[i]){
            cout << "NO" << endl;
            return 0;
        }
    }

    bool diff{false};
    char diff_c{};

    for(int i{}; i < s1.size(); ++i){
        if(s1[i] != s2[i]){
            if(diff and s2[i] != diff_c){
                cout << "NO" << endl;
                return 0;
            }
            else if(not diff){
                diff = true;
                diff_c = s1[i];
            }
        }
    }

    if(diff){
        cout << "YES" << endl;
    } else {
        for(int i{}; i < 26; ++i){
            if(count[i] == 2){
                cout << "YES" << endl;
                return 0;
            }
        }
        cout << "NO" << endl;
        return 0;

    }

    return 0;
}