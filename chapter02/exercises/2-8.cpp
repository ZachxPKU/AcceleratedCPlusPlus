//
// Created by Zach on 2022/8/11.
//

#include <iostream>
using namespace std;

int main(){
    int i = 1;
    int product = 1;
    while (i < 10) {
        product *= i;
        ++i;
    }
    std::cout << product << std::endl;
    return 0;
}

