//
// Created by Naman Bhalla on 2019-04-04.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <utility>
#include <cstring>

using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    int x, y, z;
    int check {a + b + c};
    for(int i{0}; i <= a; ++i){
        x = i;
        y = a - i;
        z = b - i;
        if(x >= 0 and y >= 0 and z >= 0 and x + y + z == check/ 2.){
            cout << x << " " << z << " " << y << endl;
            return 0;
        }
    }

    cout << "Impossible" << endl;
    return 0;
}