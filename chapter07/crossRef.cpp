//
// Created by Zach on 2022/9/6.
//

#include <iostream>
#include <string>
#include <map>
#include <vector>
#include "../chapter05/split.h"

using namespace std;

map<string, vector<int>> crossRef(istream& in, vector<string> find_words(const string&) = split){
    string line;
    int line_num = 0;
    map<string, vector<int>> ret;

    while(getline(in, line)){
        ++line_num;

        vector<string> words = find_words(line);

        for(vector<string>::const_iterator iter = words.begin(); iter != words.end(); ++iter){
            ret[*iter].push_back(line_num);
        }
    }
    return ret;
}

int main(){
    map<string, vector<int>> ret = crossRef(cin);

    for(map<string, vector<int>>::const_iterator iter = ret.begin(); iter != ret.end(); iter++){
        cout << iter->first << " occurs on line(s): ";
        vector<int>::const_iterator line_iter = iter->second.begin();
        while(line_iter != iter->second.end()){
            cout << *(line_iter++) << " ";
        }
        cout << endl;
    }

    return 0;
}