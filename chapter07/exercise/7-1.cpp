//
// Created by Zach on 2022/9/10.
//

#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

int main()
{
    string s;
    map<string, int> counters;

    while (cin >> s)
        ++counters[s];

    map<int, vector<string>> wordsbyFre;

    for(map<string, int>::const_iterator iter = counters.begin();
         iter != counters.end(); ++iter) {
        wordsbyFre[iter->second].push_back(iter->first);
    }

    for(map<int, vector<string>>::const_iterator iter = wordsbyFre.begin(); iter != wordsbyFre.end(); ++iter){
        cout << iter->first;
        for(vector<string>::const_iterator it = iter->second.begin(); it != iter->second.end(); ++it)
            cout << " " << *it;
        cout << endl;
    }

    return 0;
}