//
// Created by Naman Bhalla on 2019-03-31.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>
#include <sstream>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    stringstream ss{};
    string given{};

    cin >> given;

    for(int i{}; i < given.size(); ++i){
        if(given.substr(i, 3) == "WUB"){
            i += 2;
            ss << " "; // Will indicate end of word when getting string from stream
        } else {
            ss << given[i];
        }
    }

    while(ss >> given){
        cout << given << " ";
    }
    cout << endl;


    return 0;
}