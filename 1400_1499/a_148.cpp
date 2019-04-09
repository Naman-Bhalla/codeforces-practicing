//
// Created by Naman Bhalla on 2019-04-09.
//

#include <cstdio>
#include <algorithm>
#include <cstring>
#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int gcd(int a, int b){
    while(a > 0 and b > 0){
        if(a < b){
            swap(a, b);
        }
        a %= b;
    }

    return max(a, b);
}

int lcm(int a, int b){
    return (a * b)/ gcd(a, b);
}
int main(){
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;

//cout << gcd(3,4) << endl << gcd(4, 3) << endl << gcd(12, 4) << endl << gcd(12, 15) << endl;
    int upb;

    int lcm_kl = lcm(k, l);
    int lcm_km = lcm(k, m);
    int lcm_kn = lcm(k, n);
    int lcm_lm= lcm(l, m);
    int lcm_ln = lcm(l, n);
    int lcm_mn = lcm(m, n);

    int lcm_klm = lcm(lcm_kl, m);
    int lcm_kln = lcm(lcm_kl, n);
    int lcm_kmn = lcm(lcm_km, n);
    int lcm_lmn = lcm(lcm_lm, n);

    int lcm_klmn = lcm(lcm_kl, lcm_mn);

    upb = (
            (d / k + d / l + d/ m + d/n - d/lcm_kl - d/lcm_km - d/lcm_kn - d / lcm_lm - d/lcm_ln - d/lcm_mn) +
                    (d/ lcm_klm + d/lcm_kln + d/lcm_kmn + d/lcm_lmn - d/lcm_klmn)
            );

    cout << upb << endl;
    return 0;
}