//
// Created by Naman Bhalla on 2019-04-10.
//

#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>
#include <utility>
#include <iostream>

using namespace std;

int main(){
    string s, t;
    cin >> s >> t;

    if(s.size() != t.size()){
        cout << "NO" << endl;
        return 0;
    }

    int n{static_cast<int>(s.size())};

    for(int i{}; i < s.size(); ++i){
        if(s.at(i) != t.at(n - i - 1)){
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
    return 0;
}