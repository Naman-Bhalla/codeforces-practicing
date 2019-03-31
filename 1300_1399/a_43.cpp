//
// Created by Naman Bhalla on 2019-03-31.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

int main(){
    int n{};
    map< string, int > m;

    cin >> n;

    string now{};
    int maxm{-1};

    for(int i{}; i < n; ++i){
        cin >> now;
        m[now]++;
    }

    for(auto str: m){
        if(str.second > maxm){
            maxm = str.second;
            now = str.first;
        }
    }

    cout << now << endl;


    return 0;
}