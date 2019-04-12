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

int main(){
    int r, g, b;
    cin >> r >> g >> b;
    int answer{r / 3 + g / 3 + b / 3};
    if(r >= 1 and g >= 1 and b >= 1)
        answer =max(answer, 1 + (r - 1)/ 3 + (g - 1)/ 3 + (b - 1)/ 3);
    if(r >= 2 and g >= 2 and b >= 2)
        answer = max(answer, 2 + (r - 2)/ 3 + (g - 2)/ 3 + (b - 2)/ 3);
    cout << answer << endl;
    return 0;
}