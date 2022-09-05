//
// Created by Zach on 2022/9/5.
//

#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    string s;
    map<string, int> counters;

    while (cin >> s)
        ++counters[s];

    for (map<string, int>::const_iterator iter = counters.begin();
         iter != counters.end(); ++iter) {
        cout << iter->first << "\t" << iter->second << endl;
    }

    return 0;
}