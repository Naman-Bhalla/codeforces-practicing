//
// Created by Naman Bhalla on 2019-04-06.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>
#include <cmath>

using namespace std;
vector<int> rows_ch{};
vector<int> cols_ch{};

vector< int > primes{};
bool not_primes[100101];
void generate_primes(){
    not_primes[1] = true;
    bool prime;
    for(int i{3}; i < 100101; i += 2){
        prime = true;
        if(not not_primes[i]){
            for(int j{3}; j <= sqrt(i); j += 2){
                if(i % j == 0){
                    prime = false;
                    break;
                }
            }
            if(not prime){
                not_primes[i] = true;
            }
            for(int j{2 * i}; j < 100101; j += i){
                not_primes[j] = true;
            }
        }
    }

    primes.emplace_back(2);
    for(int i{3}; i < 100101; i += 2){
        if(not not_primes[i]){
            primes.emplace_back(i);
        }
    }
}

int main(){
    int n, m, needed_ch, now;
    cin >> n >> m;

    memset(not_primes, 0, sizeof not_primes);
    generate_primes();
    rows_ch.assign(n, 0);
    cols_ch.assign(m, 0);
    for(int i{}; i < n; ++i){
        for(int j{}; j < m; ++j){
            cin >> now;
            needed_ch = *lower_bound(primes.begin(), primes.end(), now) - now;
            rows_ch[i] += needed_ch;
            cols_ch[j] += needed_ch;
        }
    }

    cout << min(*min_element(rows_ch.begin(), rows_ch.end()), *min_element(cols_ch.begin(), cols_ch.end())) <<endl;
    return 0;
}