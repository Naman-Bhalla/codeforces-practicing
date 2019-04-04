//
// Created by Naman Bhalla on 2019-04-03.
//

#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int a[100005];

int main(){
    int n, m;
    int total_add{};
    cin >> n >> m;

    memset(a, 0, sizeof a);

    for(int i{1}; i<= n; ++i){
        cin >> a[i];
    }
    int t,v,x,y,q;
    for(int i{1}; i<= m; ++i){
        cin >> t;
        if(t == 1){
            cin >> v >> x;
            a[v] = x - total_add;
        } else if(t == 2){
            cin >> y;
            total_add += y;
        } else{
            cin >> q;
            cout << a[q] + total_add << endl;
        }
    }

    return 0;
}