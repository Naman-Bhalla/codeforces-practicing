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
vector< int > adj_list[100005];
int parents[100005];
int not_obeys[100005];

int main(){
    int n{};
    cin >> n;

    int p{}, c{};

    memset(adj_list, 0, sizeof adj_list);
    memset(parents, 0, sizeof parents);
    memset(not_obeys, 0, sizeof not_obeys);

    bool none_found{true};

    for(int i{1}; i<= n; ++i){
        cin >> p >> c;
        if(p != -1)
            adj_list[p].push_back(c);

        parents[i] = p;
        not_obeys[i] = c;
    }

    bool responsible{false};

    for(int i{1}; i <= n; ++i ){
        if(not_obeys[i]){
            responsible = false;
            for(auto j: adj_list[i]){
                if(j == 0){
                    responsible = true;

                    break;
                }
            }
            if(not responsible){
                cout << i << " ";
                none_found = false;
            }
        }
    }

    if(none_found){
        cout << -1;
    }

    cout << endl;

    return 0;
}