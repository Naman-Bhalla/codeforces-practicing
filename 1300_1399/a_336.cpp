//
// Created by Naman Bhalla on 2019-03-29.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    int x{}, y{};
    cin >> x >> y;

    int x1{}, y1{abs(x) + abs(y)}, x2{abs(x) + abs(y)}, y2{};

    if(x < 0){
        x2 = -x2;
        swap(x1, x2);
        swap(y1, y2);
    }
    if(y < 0){
        y1 = -y1;
        y2 = -y2;
    }

    printf("%d %d %d %d", x1, y1, x2, y2);

    return 0;


}