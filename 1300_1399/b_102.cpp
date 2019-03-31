//
// Created by Naman Bhalla on 2019-03-31.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

int sum_dig_num(int num){
    int ans{0};
    while(num){
        ans += (num % 10);
        num /= 10;
    }

    return ans;
}

int sum_dig_str(const string &num){
    int ans{};

    for(int i{}; i < num.size(); ++i){
        ans += (num[i] - '0');
    }

    return ans;
}

int main(){
    string n{};
    cin >> n;
    int num{};

    if(n.size() == 1){
        cout << 0 << endl;
        return 0;
    }

    int count{1};

    num = sum_dig_str(n);

    while(num >= 10){
        num = sum_dig_num(num);
        ++count;
    }

    cout << count << endl;

    return 0;
}