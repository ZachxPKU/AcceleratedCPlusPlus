//
// Created by Zach on 2022/8/22.
//

#ifndef ACCELERATEDCPLUSPLUS_GRADE_H
#define ACCELERATEDCPLUSPLUS_GRADE_H

#include <vector>
#include "Student_info.h"

double grade(double, double, double);
double grade(double, double, const std::vector<double>&);
double grade(const Student_info&);

#endif //ACCELERATEDCPLUSPLUS_GRADE_H
