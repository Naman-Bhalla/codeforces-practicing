//
// Created by Naman Bhalla on 2019-04-09.
//

#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>
#include <utility>

using namespace std;

int main(){
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    cout << min((k * l)/ nl, min(c * d, p / np))/ n << endl;
    return 0;
}