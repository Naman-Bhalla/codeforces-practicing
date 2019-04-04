//
// Created by Naman Bhalla on 2019-04-04.
//

#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>
#include <utility>
#include <cmath>

using namespace std;

int a, b, c;

int sum_digits(int x){
    int answer{};
    while(x){
        answer += (x % 10);
        x /= 10;
    }

    return answer;
}

long long int solve_equation(int s_x){
    long long int answer{};
    answer = pow(static_cast<long long int>(s_x), a);
    answer *= b;
    answer += c;

    return answer;
}
int main(){
    cin >> a >> b >> c;
    long long int now;
    vector< int > answers{};
    for(int i{1}; i <= 81; ++i){
        now = solve_equation(i);
        if(now < 1000000000 and sum_digits(now) == i){
            answers.emplace_back(now);
        }
    }
    cout << answers.size() << endl;
    for(auto i: answers){
        cout << i << " ";
    }

    cout << endl;
    return 0;
}