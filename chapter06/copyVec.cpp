//
// Created by Zach on 2022/8/31.
//

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iterator>

using namespace std;

int main(){
    vector<string> up;
    vector<string> bottom;

    string s;

    cout << "Please enter first vector<string>: " << endl;

    while(cin >> s){

        up.push_back(s);
    }

    cin.clear();

    cout << "Please enter second vector<string>: " << endl;


    while(cin >> s){
        bottom.push_back(s);
    }

    vector<string> ret = up;

    copy(bottom.begin(), bottom.end(), back_inserter(ret));

    for(vector<string>::iterator i = ret.begin(); i != ret.end(); ++i){
        cout << *i << endl;
    }

    return 0;

}