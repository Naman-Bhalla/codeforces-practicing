//
// Created by Naman Bhalla on 2019-04-01.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <utility>

using namespace std;
//vector< pair< int, int > > vp{};

int main(){
    int n{},a,b;
    cin >> n;

    for(int i{}; i < n; ++i){
        cin >> a >> b;
        if(a != b){
            cout << "Happy Alex" << endl;
            return 0;
        }
    }

    cout << "Poor Alex" << endl;
    return 0;
}