//
// Created by Naman Bhalla on 2019-03-29.
//

#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
    int n{}, t{};
    cin >> n >> t;
    string s{};
    cin >> s;

    for(int i{}; i < t; ++i){
        for(int j{n - 1}; j >= 1; --j){
            if(s.at(j) == 'G' and s.at(j - 1) == 'B'){
                swap(s.at(j), s.at(j - 1));
                --j;
            }
        }
    }

    cout << s << endl;
    return 0;
}