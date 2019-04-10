//
// Created by Naman Bhalla on 2019-04-10.
//

#include <cstdio>
#include <cstring>
#include <algorithm>
#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int main(){
    int y, k, n;
    cin >> y >> k >> n;
    bool atl{false};

    for(int x{k - (y % k)}; x <= n - y; x += k){
        cout << x << " ";
        atl = true;
    }

    if(not atl){
        cout << -1;
    }

    cout << endl;
    return 0;
}