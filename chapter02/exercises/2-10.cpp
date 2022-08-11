//
// Created by Zach on 2022/8/11.
//

#include <iostream>
using namespace std;

int main() {
    int n = 10;
    int k = 0;
    while (k != n) { // invariant: we have written k asterisks so far
        using std::cout;
        cout << "*";
        ++k;
    }
    std::cout << std::endl; // std:: is required here
    return 0;
}

