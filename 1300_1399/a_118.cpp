//
// Created by Naman Bhalla on 2019-03-31.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <set>

using namespace std;

int main(){
    string s;
    cin >> s;
    set<char> vowels {'a', 'o', 'y', 'e', 'u', 'i'};

    for(int i{}; i < s.size(); ++i){
        if(vowels.find(tolower(s[i])) == vowels.end()){ // => Not Vowel
            cout << '.' << (char)tolower(s[i]);
        }
    }

    cout << endl;


    return 0;
}