//
// Created by Naman Bhalla on 2019-04-09.
//

#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>
#include <iostream>
#include <set>
using namespace std;

bool is_distinct(int num){
    set< int > dits{};
    while(num){
        if(dits.find(num % 10) != dits.end()){
            return false;
        }
        dits.emplace(num % 10);
        num /= 10;
    }

    return true;
}
int main(){
    int n;
    cin >> n;

    for(int i{n + 1}; i <= 9012; ++i){
        if(is_distinct(i)){
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}