//
// Created by Naman Bhalla on 2019-04-10.
//

#include <cstdio>
#include <algorithm>
#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

vector< string > stud_marks{};
vector< char > max_marks{};
int main(){
//    memset(maxm_marks, 0, sizeof maxm_marks);
    int n, m;
    cin >> n >> m;

    max_marks.resize(m);
    string s;
//    char max_c;

    for(int i{}; i < n; ++i){
        cin >> s;
        stud_marks.emplace_back(s);
        for(int j{}; j < m; ++j){
            max_marks[j] = max(max_marks[j], s[j]);
        }
    }

    int answer{};

    for(int i{0}; i < n; ++i){
        for(int j{0}; j < m; ++j){
            if(stud_marks[i][j] == max_marks[j]){
                ++answer;
                break;
            }
        }
    }

    cout << answer << endl;
    return 0;
}