//
// Created by Naman Bhalla on 2019-03-30.
//

#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
    int n{}, now{};
    int last_black{}, last_white{};
    cin >> n;
    for(int i{1}; i <= n;++i){
        cin >> now;
        if(now==0){
            last_black = i;
        } else{
            last_white = i;
        }
    }
    
    cout << min(last_black, last_white) << endl;
    return 0;
}