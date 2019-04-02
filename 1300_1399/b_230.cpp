//
// Created by Naman Bhalla on 2019-04-02.
//

#include <cstdio>
#include <algorithm>
#include <iostream>
#include <vector>
#include <utility>
#include <queue>
#include <set>
#include <cstring>
#include <cmath>

using namespace std;

vector< long long int > t_primes{};

void generate_t_primes(){
    bool not_primes[1000006];
    memset(not_primes, 0, sizeof not_primes);

    not_primes[2] = false;
    for(int i{4}; i < 1000006; i += 2){
        not_primes[i] = true;
    }

    bool prime;

    for(int i{3}; i < 1000006; i += 2){
        if(not_primes[i] == false){
            prime = true;
            for(int j{3}; j <= sqrt(i); j += 2){
                if(i % j == 0){
                    prime = false;
                    break;
                }
            }

            if(not prime){
                not_primes[i] = true;
            }

            for(int k{i * 2}; k < 1000006; k += i){
                not_primes[k] = true;
            }
        }
    }
//
//    for(int i{1}; i < 1000; ++i){
//        if(not_primes[i] == false)
//            cout << i << endl;
//    }

    for(long long int i{2}; i < 1000006; ++i){
        if(not not_primes[i]){
            t_primes.emplace_back(i * i);
        }
    }
}

int main(){
    int n{};
    long long int now;
    generate_t_primes();
    cin >> n;
    for(int i{}; i < n; ++i){
        cin >> now;
        if(*lower_bound(t_primes.begin(), t_primes.end(), now) == now){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}