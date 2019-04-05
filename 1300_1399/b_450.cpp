//
// Created by Naman Bhalla on 2019-04-05.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>
#include <utility>
#include <iomanip>

using namespace std;
const int mod {1000000007};

int main(){
    int x, y, n;
    cin >> x >> y;
    cin >> n;

    int vals[]{x - y, x, y, y - x, -x, -y};

    int val{vals[n % 6] % mod};
    if(val < 0){
        val += mod;
    }

    cout << val << endl;
    return 0;
}