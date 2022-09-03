//
// Created by Zach on 2022/9/3.
//

#include <iostream>
#include <string>
using namespace std;

bool is_palindromes(const string &s){
    return equal(s.begin(), s.end(), s.rbegin());
}

int main(){
    cout << "Please enter a word: " << endl;

    string s;
    cin >> s;

    if(is_palindromes(s))
        cout << s << " is a palindrome." << endl;
    else
        cout << s << " is not a palindrome." << endl;

    return 0;
}
