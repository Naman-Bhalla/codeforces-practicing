//
// Created by Naman Bhalla on 2019-04-12.
//

#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>
#include <iostream>
#include <utility>

using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i{n}; i < (n << 1); ++i){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}