//
// Created by Zach on 2022/9/4.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<string> vec_string;

    cout << "Please enter strings: " << endl;

    string s;

    while(cin >> s){
        vec_string.push_back(s);
    }

    string s_con;

    vector<string>::const_iterator iter = vec_string.begin();

    while(iter != vec_string.end()){
        s_con = s_con + *(iter++);
    }

    cout << s_con << endl;

    return 0;
}