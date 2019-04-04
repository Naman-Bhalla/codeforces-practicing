//
// Created by Naman Bhalla on 2019-04-03.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>

using namespace std;

int main(){
    int last_h{-1}, last_min{-1};
    int present_h{}, present_min{};
    int n;
    int max_together{0};
    int present_cons{0};

    cin >> n;

    for(int i{}; i < n; ++i){
        cin >> present_h >> present_min;
        if(present_h == last_h and present_min == last_min){
            present_cons += 1;
        } else {
            present_cons = 1;
        }

        last_h = present_h;
        last_min = present_min;

        max_together = max(max_together, present_cons);
    }

    cout << max_together << endl;
    return 0;
}