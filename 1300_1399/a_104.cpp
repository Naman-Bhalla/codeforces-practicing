//
// Created by Naman Bhalla on 2019-03-28.
//

#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main(){

    int n{};
    cin >> n;

    if(n - 10 > 0 and n - 10 < 10){
        cout << 4 <<endl;
    } else if(n - 10 == 10){
        cout << 15 << endl;
    } else if(n - 10 == 11){
        cout << 4 << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}