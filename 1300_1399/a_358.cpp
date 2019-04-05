//
// Created by Naman Bhalla on 2019-04-05.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <utility>
#include <cstring>

using namespace std;

int points[1003];

bool intersecting(int s1, int e1, int s2, int e2){
    return (e1 > s2 and e1 < e2 and s1 < s2) or (e2 > s1 and e2 < e1 and s2 < s1);
}
int main(){
    int n, a, b;
    cin >> n;
    memset(points, 0, sizeof points);

    for(int i{}; i < n; ++i){
        cin >> points[i];
    }

    for(int i{}; i < n - 1; ++i){
        for(int j{i + 1}; j < n - 1; ++j){
            if(intersecting(min(points[i], points[ i + 1]), max(points[i], points[i + 1]),
                    min(points[j], points[j + 1]), max(points[j], points[j + 1]))){
                cout << "yes" << endl;
                return 0;
            }
        }
    }

    cout << "no" << endl;
    return 0;
}