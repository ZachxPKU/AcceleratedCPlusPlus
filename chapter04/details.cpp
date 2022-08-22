//
// Created by Zach on 2022/8/21.
//

#include <iostream>
#include <iomanip>
using namespace std;

//int main(){
//    int x;
//    cout << "Enter a number: " << endl;
//    cin >> x;
//
//    string s;
//    cout << "Enter a string: " << endl;
//    cin >> s;
//
//    cout.width(5);
//    cout << x << endl;
//    cout << s << endl;
//
//    return 0;
//}

int main(){
    int x;
    cout << "Enter a number: " << endl;
    cin >> x;

    string s;
    cout << "Enter a string: " << endl;
    cin >> s;

    cout << setw(5) << x  << endl;
    cout << s << endl;

    return 0;
}

