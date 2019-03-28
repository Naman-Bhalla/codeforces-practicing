//
// Created by Naman Bhalla on 2019-03-28.
//

#include <algorithm>
#include <cstdio>
#include <iostream>

using namespace std;

int main(){
    string a{}, b{};

    cin >> a >> b;

    for(int i{}; i < a.size(); ++i){
        a.at(i) = tolower(a.at(i));
    }

    for(int i{}; i < b.size(); ++i){
        b.at(i) = tolower(b.at(i));
    }

    if(a < b){
        cout << -1 << endl;
    } else if(a > b){
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}