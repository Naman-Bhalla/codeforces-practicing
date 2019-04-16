//
// Created by Naman Bhalla on 2019-04-14.
//

#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>

using namespace std;

int main(){
    long long int n;
    cin >> n;

    if(n == 1){
        cout << 1 << endl;
    } else if(n == 2){
        cout << 2 << endl;
    } else if(n == 3) {
        cout << 6 << endl;
    } else if(n % 2 != 0){
        cout << n * (n - 1) * (n - 2) << endl;
    } else if(n % 3 != 0){
        cout << n * (n - 1) * (n - 3) << endl;
    } else {
        cout << (n - 1) * (n - 2) * (n - 3) << endl;
    }
    return 0;
}