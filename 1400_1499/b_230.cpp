//
// Created by Naman Bhalla on 2019-04-12.
//

#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>
#include <utility>
#include <iostream>
#include <cmath>

using namespace std;
vector< long long int > primes{};
bool composite[1000007];

void gen_primes(){
    memset(composite, 0,sizeof composite);
    int n {1000007};

    composite[0] = true;
    composite[1] = true;

    for(int i{3}; i * i < n; i += 2){
        if(not composite[i]){
            for(long long int j{i * i}; j < n; j += i){
                composite[j] = true;
            }
        }
    }

    primes.emplace_back(4);
    for(long long int i{3}; i < n; i += 2){
        if(not composite[i]){
            primes.emplace_back(i * i);
        }
    }

}
int main(){
    gen_primes();
    int n;
    long long int now;
    cin >> n;
    for(int i{1}; i <= n; ++i){
        cin >> now;
        auto val = *lower_bound(primes.begin(), primes.end(), now);
        if(val == now){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}