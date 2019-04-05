//
// Created by Naman Bhalla on 2019-04-05.
//

#include <cstdio>
#include <algorithm>
#include <iostream>
#include <cstring>
#include <vector>
#include <utility>

using namespace std;
int nb, ns, nc;
int pb, ps, pc;
int bo{}, so{}, co{};

long long int price_for(long long int r){
    long long int answer{};
    answer = (max(0ll, bo * r - nb) * pb) + (max(0ll, so * r - ns) * ps) + (max(0ll, co * r - nc) * pc);
    return answer;
}

int main(){
    string s;
    cin >> s;
    cin >> nb >> ns >> nc;
    cin >> pb >> ps >> pc;

    long long int r;
    cin >> r;

    for(auto chars: s){
        if(chars == 'B'){
            ++bo;
        } else if(chars == 'S'){
            ++so;
        } else {
            ++co;
        }
    }

    long long int answer{}, f_a;
    long long int l{}, right{1000000000101};

    while(l <= right){
        answer = l + (right - l)/ 2;
        f_a = price_for(answer);
        if(f_a == r){
            cout << answer << endl;
            return 0;
        } else if(f_a > r){
            right = answer - 1;
        } else {
            l = answer + 1;
        }
    }

    cout << l - 1<< endl;
    return 0;
}