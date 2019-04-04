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

int gcd(int a, int b){
    while(a > 0 and b > 0){
        if(a > b){
            a %= b;
        } else {
            b %= a;
        }
    }

    return a + b;
}

void normalize(int &a, int &b){
    int c{gcd(a, b)};
    a /= c;
    b /= c;
}

int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;

    int check{b * c - a * d};
    int denom{};
    if(check > 0){
        denom = b * c;
        normalize(check, denom);
        cout << check << "/" << denom;
    } else if (check < 0){
        denom = a * d;
        check = -check;
        normalize(check, denom);
        cout << check << "/" << denom;
    } else {
        cout << "0/1" << endl;
    }

    return 0;

}