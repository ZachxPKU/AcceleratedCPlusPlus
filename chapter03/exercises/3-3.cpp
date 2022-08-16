//
// Created by Zach on 2022/8/16.
//

#include <iostream>
#include <set>
#include <string>

using namespace std;

int main(){
    string s;
    set<string> words;
    cout << "Please enter: " << endl;
    while(cin >> s){
        words.insert(s);
    }
    cout << "There are(is) distinct " << words.size() << " word(s) in the inputs." << endl;
    return 0;
}

