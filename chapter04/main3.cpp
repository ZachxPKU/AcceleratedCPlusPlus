//
// Created by Zach on 2022/8/22.
//


#include <algorithm>
#include <iomanip>
#include "Student_info.h"
#include "grade.h"

using std::cin;
using std::sort;
using std::string;
using std::vector;
using std::streamsize;
using std::cout;
using std::setprecision;
using std::domain_error;
using std::endl;
using std::max;

int main(){
    std::vector<Student_info> students;
    Student_info record;
    string::size_type maxlen = 0;

    while(read(cin,record)){
        maxlen = max(maxlen, record.name.size());
        students.push_back(record);
    }

    sort(students.begin(), students.end(), compare);

    for(vector<Student_info>::size_type i = 0; i != students.size(); ++i) {
        cout << students[i].name << string(maxlen + 1 - students[i].name.size(), ' ');

        try{
            double final_grade = grade(students[i]);
            streamsize prec = cout.precision();
            cout << setprecision(3) << final_grade << setprecision(prec);
        } catch (domain_error e) {
            cout << e.what();
        }

        cout << endl;
    }
    return 0;
}