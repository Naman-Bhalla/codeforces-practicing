//
// Created by Naman Bhalla on 2019-04-02.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>
#include <utility>
#include <queue>

using namespace std;

vector< vector< int > > adj_list{};
bool visited[300];
void dfs(int source){
    visited[source] = true;
    for(auto j: adj_list[source]){
        if(not visited[j]){
            dfs(j);
        }
    }
}

int main(){
    int n, m, num, lang, lang_count{};

    cin >> n >> m;

    adj_list.resize(n + m + 1);
    memset(visited, 0, sizeof visited);

    for(int i{1}; i <= n; ++i){
        cin >> num;
        lang_count += num;
        for(int j{}; j < num; ++j){
            cin >> lang;
            adj_list[m + i].emplace_back(lang);
            adj_list[lang].emplace_back(i + m);
        }
    }

    int ans{};

    for(int i{m + 1}; i <= m + n; ++i){
        if(not visited[i]){
            ++ans;
            dfs(i);
        }
    }

    if(lang_count == 0){
        cout << ans<< endl;
    } else {
        cout << ans - 1<< endl;
    }

    return 0;
}