//
// Created by Naman Bhalla on 2019-04-12.
//

#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>

using namespace std;

//vector< pair< int, int > > points{};
bool visited[101];
int x[101];
int y[101];
int n;
void dfs(int i){
    visited[i] = true;
    for(int j{}; j < n; ++j){
        if((not visited[j]) and (x[j] == x[i] or y[j] == y[i])){
            dfs(j);
        }
    }
}

int main(){
    memset(visited, 0,sizeof visited);

    cin >> n;

    for(int i{}; i < n; ++i){
        cin >> x[i] >> y[i];
    }

    int answer{-1};
    for(int i{}; i < n; ++i){
        if(not visited[i]){
            ++answer;
            dfs(i);
        }
    }

    cout << answer << endl;
    return 0;
}