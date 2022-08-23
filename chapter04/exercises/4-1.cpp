//
// Created by Zach on 2022/8/23.
//

#include "../Student_info.h"
using std::max;

int main() {
    int maxlen;
    Student_info s;
    s.name = "Zach";
    max(s.name.size(), maxlen); //error

    return 0;
}
