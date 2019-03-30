//
// Created by Naman Bhalla on 2019-03-30.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    string o, t;

    cin >> o >> t;
    auto n{o.size()};

    if(o.size() != t.size()){
        cout << "NO" << endl;
        return 0;
    }

    for(int i{}; i < n; ++i){
        if(o.at(i) != t.at(n - 1 - i)){
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;

    return 0;
}