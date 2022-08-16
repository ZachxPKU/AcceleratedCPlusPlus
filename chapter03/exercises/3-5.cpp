//
// Created by Zach on 2022/8/16.
//

#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

#define N_HW 5

int main()
{
    vector<string> names;
    vector<double> final_grades;
    while(true){
        cout << "Please enter your first name: ";
        string name;
        cin >> name;
        cout << "Hello, " << name << "!" << endl;

        names.push_back(name);

        cout << "Please enter your midterm and final exam grades: ";
        double midterm, final;
        cin >> midterm >> final;

        cout << "Enter all your homework grades: ";

        double sum = 0;
        int count = N_HW;

        double x;

        while (count--) {
            cin >> x;
            sum += x;
        }

        double final_grade = 0.2 * midterm + 0.4 * final + 0.4 * sum / N_HW;

        final_grades.push_back(final_grade);

        cout << "Quit?" << endl;

        string q;

        cin >> q;

        if(q == "y"){
            break;
        }
    }

    int n_stu = names.size();

    for(int i = 0; i < n_stu; i++){
        cout << "Name: " << names[i] << endl;
        cout << "Final Grade: " << final_grades[i] << endl;
    }

    return 0;
}

