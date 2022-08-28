//
// Created by Zach on 2022/8/28.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

const string ascenders = "bdfhklt";
const string descenders = "gjpqy";
const string scenders = ascenders + descenders;

bool includescenders(const string &s){
    for(string::size_type i = 0; i != s.size(); i++){
        for(string::size_type j = 0; j != scenders.size(); ++j){
            if(s[i] == scenders[j])
                return true;
        }
    }
    return false;
}

int main(){
    cout << "Please enter a string: " << endl;
    string s;
    cin >> s;
    if(includescenders(s))
        cout << "Include ascenders or descenders." << endl;
    else
        cout << "Not include ascenders or descenders." << endl;

    vector<string> dict;
    cout << "Please enter strings: " << endl;

    while(cin >> s){
        dict.push_back(s);
    }

    vector<string>::size_type maxlen = 0;
    string maxlen_s;

    for(vector<string>::iterator i = dict.begin(); i != dict.end(); ++i){
        if(!includescenders(*i)){
            if((*i).size() > maxlen){
                maxlen = (*i).size();
                maxlen_s = (*i);
            }
        }
    }

    cout << "Longest word without ascenders or descenders: " << maxlen_s << endl;

    return 0;
}


