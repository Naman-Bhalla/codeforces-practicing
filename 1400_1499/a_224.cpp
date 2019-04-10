//
// Created by Naman Bhalla on 2019-04-10.
//

#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <cmath>

using namespace std;

int main(){
    int lb,bh,lh;
    cin >> lb >> bh >> lh;

    int l, b, h;

    b = sqrt((lb * bh) / lh);
    l = sqrt((lb * lh) / bh);
    h = sqrt((bh * lh) / lb);

    cout << 4 * ( l + b + h ) << endl;

    return 0;
}