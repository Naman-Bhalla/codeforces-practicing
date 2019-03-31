//
// Created by Naman Bhalla on 2019-03-31.
//

#include <algorithm>
#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> less{};
    vector<int> equal{};
    vector<int> greater{};

    int n{}, now{};
    cin >> n;

    for(int i{}; i < n; ++i){
        cin >> now;
        if(now < 0){
            less.push_back(now);
        } else if(now > 0){
            greater.push_back(now);
        } else{
            equal.push_back(now);
        }
    }

    if(less.size() % 2 == 0){
        equal.push_back(less.back());
        less.pop_back();
    }

    if(greater.size() == 0){
        greater.push_back(less.back());
        less.pop_back();
        greater.push_back(less.back());
        less.pop_back();
    }

    cout << less.size();
    for(int i{}; i < less.size(); ++i){
        cout << " " << less[i];
    }
    cout << endl;


    cout << greater.size();
    for(int i{}; i < greater.size(); ++i){
        cout << " " << greater[i];
    }
    cout << endl;

    cout << equal.size();
    for(int i{}; i < equal.size(); ++i){
        cout << " " << equal[i];
    }
    cout << endl;

    return 0;
}