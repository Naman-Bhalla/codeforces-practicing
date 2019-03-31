//
// Created by Naman Bhalla on 2019-03-31.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <utility>
#include <cstring>

using namespace std;


int remove_zeros(int num){
    int answer{};
    int tens{1};

    while(num){
        if(num % 10){
            answer += tens * (num % 10);
            tens *= 10;
        }
        num /= 10;
    }

    return answer;
}

int main(){
    int a{}, b{}, c{};
    cin >> a >> b;
    c = a + b;

    if(remove_zeros(a) + remove_zeros(b) == remove_zeros(c)){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}