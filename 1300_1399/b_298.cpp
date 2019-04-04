//
// Created by Naman Bhalla on 2019-04-02.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>
#include <queue>
#include <map>

using namespace std;


int main(){
    long long int t, s_x, s_y, e_x, e_y;
    string direns;
    map< char, long long int > count{};
    cin >> t >> s_x >> s_y >> e_x >> e_y;
    cin >> direns;

    for(auto chars: direns)
        count[chars] += 1;

    long long int move_x, move_y;

    move_x = e_x - s_x;
    move_y = e_y - s_y;

    if((move_x < 0 and count['W'] < -move_x) or (move_x > 0 and count['E'] < move_x)){
        cout << - 1 << endl;
        return 0;
    }

    if((move_y < 0 and count['S'] < -move_y) or (move_y > 0 and count['N'] < move_y)){
        cout << - 1<< endl;
        return 0;
    }

    char x = (move_x < 0 ? 'W' : 'E');
    char y = (move_y < 0 ? 'S' : 'N');
    long long int x_c{};
    long long int y_c{};

    for(int i{0}; i < t; ++i){
        if(direns[i] == x)
            ++x_c;
        if(direns[i] == y)
            ++y_c;
        if(x_c >= abs(move_x) and y_c >= abs(move_y)){
            cout << i + 1 << endl;
            return 0;
        }
    }

    cout << - 1 << endl;
    return 0;
}