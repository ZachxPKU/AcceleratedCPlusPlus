//
// Created by Zach on 2022/8/11.
//

#include <iostream>
using namespace std;

int main(){
    int a, b;
    cout << "Please enter two numbers: ";
    cin >> a >> b;
    int max = a > b ? a : b;
    std::cout << "The larger one is: " << max << std::endl;
    return 0;
}

