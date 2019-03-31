//
// Created by Naman Bhalla on 2019-03-30.
//
#include <cstring>
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <utility>
#include <stack>
#include <set>

using namespace std;

bool visited[100005];
int parents[100005];
int cs[100005];
vector< pair< pair< int, int >,  int > > adj_list[100005];

int main(){

    int n{};
//    vector< pair< int, int > > tree{};
    cin >> n;
    int p{}, c{};
//    vector<int> children{};
//    tree.emplace_back(0, 0);
    bool found_one{};
//    set<int> already_out;

    memset(visited, 0, sizeof visited);
    memset(parents, 0, sizeof parents);
    memset(cs, 0, sizeof cs);
    memset(adj_list, 0, sizeof adj_list);

//    for(int i{1}; i<=n; ++i){
//        adj_list[i].clear();
//    }
    for(int i{}; i < n; ++i){
        cin >> p >> c;
//        tree.emplace_back(p, c);
        parents[i + 1] = p;
        cs[i + 1] = c;
        if(p != -1){
            adj_list[p].emplace_back(make_pair(i, p), c);
        }
    }

//    pair< int, int > now, others;
    pair< pair< int, int >,  int > now;
    bool respected{};

    for(int i{1}; i <= n; ++i){
        if(cs[i] == 1){
            respected = false;
//            children.clear();
//            for(int j{1}; j <= n; ++j){
//                if(not visited[j]){
//                    others = tree[j];
//                    if(others.first == i){
//                        children.push_back(j);
//                        if(others.second == 0){
//                            respected = true;
//                            break;
//                        }
//                    }
//                }
//            }


            for(auto j: adj_list[i]){
                if(not visited[j.first.first]){
                    if(j.second == 0){
                        respected = true;
                        break;
                    }
                }
            }

//            if(not respected){
//                visited[i] = true;
//                cout << i << " ";
//                found_one = true;
//                for(int i{}; i < children.size(); ++i){
//                    tree[children[i]].first = now.first;
//                }
//            }

            if(not respected){
                visited[i] = true;
                cout << i << " ";
                found_one = true;
                if(parents[i] != -1){
                    for(int j{}; j < adj_list[i].size(); ++j){
                        adj_list[parents[i]].push_back(adj_list[i][j]);
                    }
                }
            }
        }
    }

    if(not found_one)
        cout << -1 << endl;
    return 0;
}