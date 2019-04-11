//
// Created by Naman Bhalla on 2019-04-11.
//

#include <cstdio>
#include <cstring>
#include <algorithm>
#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int table[1001][1001];
int cur_column_idx[1001];
int cur_row_idx[1001];
int main(){
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);
    memset(table, 0, sizeof table);
    memset(cur_row_idx, 0, sizeof cur_row_idx);
    memset(cur_column_idx, 0, sizeof cur_column_idx);

    for(int i{1}; i <= n; ++i){
        cur_row_idx[i] = i;
    }

    for(int j{1}; j <= m; ++j){
        cur_column_idx[j] = j;
    }
    for(int i{1}; i <= n; ++i){
        for(int j{1}; j <= m; ++j){
            scanf("%d", &table[i][j]);
        }
    }

    char type;
    int x, y;
    for(int i{1}; i <= k; ++i){
        scanf(" %c %d %d", &type, &x, &y);
        if(type == 'c'){
            swap(cur_column_idx[x], cur_column_idx[y]);
        } else if(type == 'r'){
            swap(cur_row_idx[x], cur_row_idx[y]);
        } else {
            printf("%d\n", table[cur_row_idx[x]][cur_column_idx[y]]);
        }
    }
    return 0;
}