//
// Created by Naman Bhalla on 2019-04-10.
//

#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>

using namespace std;

int main(){
    int n;
    cin >> n;

    if(n < 0)
        cout << max(n / 10, ((n/ 100) * 10) + (n % 10)) << endl;
    else
        cout << n << endl;
    return 0;
}