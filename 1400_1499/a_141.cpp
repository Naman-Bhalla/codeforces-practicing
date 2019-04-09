//
// Created by Naman Bhalla on 2019-04-08.
//

#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <utility>
#include <vector>

using namespace std;

int count_v[26];

int main(){
    string s, t, u;
    cin >> s >> t >> u;

    if(s.size() + t.size() != u.size()){
        cout <<"NO" << endl;
        return 0;
    }
    memset(count_v, 0, sizeof count_v);

    for(auto &chars: s){
        ++count_v[chars - 'A'];
    }

    for(auto &chars: t){
        ++count_v[chars - 'A'];
    }

    for(auto &chars: u){
        --count_v[chars - 'A'];
    }

    for(auto &counts: count_v){
        if(counts != 0){
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
    return 0;
}