//
// Created by Zach on 2022/8/23.
//

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int get_width(double n) {
    return log10(n) + 1;
}

int main(){

    double max = 999;

    for(double i = 0; i <= max; ++i){
        cout << setw(get_width(max)) << i << " " << setw(get_width(max * max)) << i * i << endl;
    }

    return 0;
}