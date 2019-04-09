//
// Created by Naman Bhalla on 2019-04-08.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <utility>
#include <cstring>
#include <iomanip>

using namespace std;

 int main(){
    int n, total_sum{}, now;
    cin >> n;

    for(int i{1}; i <= n; ++i){
        cin >> now;
        total_sum += now;
    }

    cout << fixed << setprecision(12) << static_cast<double>(total_sum) / n << endl;
     return 0;
 }