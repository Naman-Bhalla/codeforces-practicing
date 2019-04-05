//
// Created by Naman Bhalla on 2019-04-05.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>
#include <utility>

using namespace std;

vector< int > adj_list[50]{};
bool visited[50];
vector< int > cc{};
vector< vector< int > > cc_sizes[50]{};
void dfs(int start){
    cc.push_back(start);
    visited[start] = true;
    for(auto nodes: adj_list[start]){
        if(not visited[nodes]){
            dfs(nodes);
        }
    }
}
int main(){
    int n, m, x, y;
    cin >> n >> m;

    for(int i{1}; i <= m; ++i){
        cin >> x >> y;
        adj_list[x].push_back(y);
        adj_list[y].push_back(x);
    }

    for(int i{1}; i <= n; ++i){
        if(not visited[i]){
            cc.clear();
            dfs(i);
            if(cc.size() > 3){
                cout << -1 << endl;
                return 0;
            }
            cc_sizes[cc.size()].push_back(cc);
        }
    }

    if(cc_sizes[2].size() > cc_sizes[1].size()){
        cout << -1 << endl;
        return 0;
    }

    if((cc_sizes[1].size() - cc_sizes[2].size()) % 3 != 0){
        cout << -1 << endl;
        return 0;
    }

    vector< vector< int > > out{};
    int a,b,c;
    for(int i{0}; i < cc_sizes[2].size(); ++i){
        a = cc_sizes[1][i][0];
        b = cc_sizes[2][i][0];
        c = cc_sizes[2][i][1];
        vector< int > push{a, b, c};
        out.emplace_back(push);
    }

    for(int i{0}; i < cc_sizes[3].size(); ++i){
        out.emplace_back(cc_sizes[3][i]);
    }

    for(int i{static_cast<int>(cc_sizes[2].size())}; i < cc_sizes[1].size(); i += 3){
        a = cc_sizes[1][i][0];
        b = cc_sizes[1][i + 1][0];
        c = cc_sizes[1][i + 2][0];
        vector< int > push{a, b, c};
        out.emplace_back(push);
    }

    for(int i{}; i < out.size(); ++i){
        for(auto j: out[i]){
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}