//
// Created by Naman Bhalla on 2019-04-10.
//

#include <cstdio>
#include <cstring>
#include <iostream>
#include <iostream>
#include <vector>
#include <utility>
#include <sstream>

using namespace std;

int main(){
    string s;
    cin >> s;
    stringstream ss{};
    for(int i{}; i < s.size(); ++i){
        if(s.substr(i, 3) == "WUB"){
            ss << " ";
            i += 2;
            continue;
        }
        ss << s[i];
    }

    while(ss >> s){
        cout << s << " ";
    }
    cout << endl;
    return 0;
}