//
// Created by Naman Bhalla on 2019-04-05.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>
#include <utility>

using namespace std;

vector< int > numbers{};

bool check(int num){
    int count_4{};
    int count_7{};

    while(num){
        if(num % 10 != 4 and num % 10 != 7){
            return false;
        }
        if(num % 10 == 4){
            ++count_4;
        } else {
            ++count_7;
        }

        num /= 10;
    }

    return count_4 == count_7;
}

void generate_luckies(int num){
    if(num > 100000008)
        return;
    if(check(num))
        numbers.push_back(num);
    generate_luckies(num*10 + 4);
    generate_luckies(num*10 + 7);
}

int main(){
    generate_luckies(0);
    sort(numbers.begin(), numbers.end());
    int n;
    cin >> n;
    if(lower_bound(numbers.begin(), numbers.end(), n) == numbers.end()){
        cout << "4444477777" << endl;
    } else {
        cout << *lower_bound(numbers.begin(), numbers.end(), n) << endl;
    }

    return 0;
}