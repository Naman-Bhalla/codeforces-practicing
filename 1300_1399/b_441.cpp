//
// Created by Naman Bhalla on 2019-04-05.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>
#include <utility>

using namespace std;

int ripening_this_day[3003];
int pending_for_the_day[3003];

int main(){
    int n, v, a, b;
    cin >> n >> v;
    memset(ripening_this_day, 0, sizeof ripening_this_day);
    memset(pending_for_the_day, 0, sizeof pending_for_the_day);

    int last_day{-1};

    for(int i{1}; i <= n; ++i){
        cin >> a >> b;
        ripening_this_day[a] += b;
        last_day = max(last_day, a + 1);
    }

    int answer{0};
    int left_for_day;
    for(int i{1}; i <= last_day + 1; ++i){
        left_for_day = v;
        left_for_day -= (min(v, pending_for_the_day[i]));
        pending_for_the_day[i + 1] += (ripening_this_day[i] - min(left_for_day, ripening_this_day[i]));
        left_for_day -= min(left_for_day, ripening_this_day[i]);
        answer += v - left_for_day;
    }

    cout << answer << endl;
    return 0;
}