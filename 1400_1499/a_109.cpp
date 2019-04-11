//
// Created by Naman Bhalla on 2019-04-11.
//

#include <cstdio>
#include <algorithm>
#include <cstring>
#include <iostream>
#include <vector>
#include <utility>
#include <map>

using namespace std;

//void generate_lucky_numbers(){
//
//}

//vector< string > dp{};
int main(){
    int n;
    cin >> n;
//    vector< int > ans{};
    int c_7{};

    while(n > 24 or n % 4 != 0){
        n -= 7;
        ++c_7;
    }
    if(n < 0){
        cout << -1 << endl;
        return 0;
    }
//    while(n){
//        n -= 4;
//    }
    for(int i{}; i < n/4; ++i){
        cout << 4 ;
    }
    for(int i{}; i < c_7; ++i){
        cout << 7 ;
    }
    cout << endl;

    return 0;
}