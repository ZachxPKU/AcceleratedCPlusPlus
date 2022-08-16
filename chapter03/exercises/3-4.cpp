//
// Created by Zach on 2022/8/16.
//

#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main(){
    string s;
    string::size_type max = std::numeric_limits<std::string::size_type>::min();
    string::size_type min = std::numeric_limits<std::string::size_type>::max();

    string::size_type size;
    cout << "Please enter: " << endl;

    while(cin >> s){
        size = s.size();
        max = size > max ? size : max;
        min = size < min ? size : min;
    }

    cout << "The length of the longest string is: " << max << endl <<
    "The length of the shortest string is: " << min <<endl;

    return 0;
}