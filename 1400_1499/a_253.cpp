//
// Created by Naman Bhalla on 2019-04-10.
//

#include <cstdio>
#include <algorithm>
#include <vector>
#include <utility>
#include <cstring>
#include <iostream>

using namespace std;

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, m;
    cin >> n >> m;
    string val;
    if(n > m){
        val ="BG";
    } else {
        val = "GB";
    }

    while (n > 0 and m > 0) {
        cout << val;
        --m, --n;
    }
    while (n > 0) {
        cout << 'B';
        --n;
    }
    while (m > 0) {
        cout << 'G';
        --m;
    }
    return 0;
}