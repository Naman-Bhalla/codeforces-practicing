//
// Created by Naman Bhalla on 2019-04-10.
//

#include <cstdio>
#include <algorithm>
#include <cstring>
#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector< int > less{};
    vector< int > equal{};
    vector< int > greater{};

    int n, now;
    cin >> n;

    for(int i{1}; i <= n; ++i){
        cin >>now;
        if(now < 0){
            less.emplace_back(now);
        } else if(now > 0){
            greater.emplace_back(now);
        } else {
            equal.emplace_back(now);
        }
    }

    if(less.size() % 2 == 0){
        equal.emplace_back(less.back());
        less.pop_back();
    }
    if(greater.size() == 0){
        greater.emplace_back(less.back());
        less.pop_back();
        greater.emplace_back(less.back());
        less.pop_back();
    }

    cout << less.size();
    for(auto &elt: less){
        cout << " " << elt;
    }
    cout << endl;

    cout << greater.size();
    for(auto &elt: greater){
        cout << " " << elt;
    }
    cout << endl;

    cout << equal.size();
    for(auto &elt: equal){
        cout << " " << elt;
    }
    cout << endl;

    return 0;
}