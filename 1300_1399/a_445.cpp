//
// Created by Naman Bhalla on 2019-04-03.
//

#include <cstdio>
#include <algorithm>
#include <iostream>
#include <vector>
#include <utility>
#include <queue>
#include <cstring>
using namespace std;
int n, m;

int main(){
    char now;
cin >> n >> m;
    for(int i{}; i < n; ++i){
        for(int j{}; j < m; ++j){
            cin >>now;
            if(now == '-'){
                cout << now;
            }
            else{
                if(i % 2 == j % 2){
                    cout << 'B';
                } else {
                    cout << 'W';
                }
            }
        }

        cout << endl;
    }


    return 0;
}