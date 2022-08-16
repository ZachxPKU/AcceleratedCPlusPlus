//
// Created by Zach on 2022/8/16.
//

#include <iomanip>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    cout << "Enter the set of integers, "
            "followed by end-of-file: ";

    double x;
    vector<double> set_int;

    while (cin >> x) {
        set_int.push_back(x);
    }

    typedef vector<double>::size_type vec_sz;
    vec_sz size = set_int.size();

    if(size < 2) {
        cout << endl << "You must enter the set of integers(At least two values). "
                        "Please try again." << endl;
        return 1;
    }

    // sort the data

    sort(set_int.begin(), set_int.end());

    vec_sz  mid = size / 2;

    double upper_quartile;
    double median;
    double lower_quartile;

    median = size % 2 == 0 ? (set_int[mid] + set_int[mid - 1]) / 2 : set_int[mid];

    vec_sz half_size = mid;

    vec_sz half_mid = half_size / 2;

    lower_quartile = half_size % 2 == 0 ? (set_int[half_mid] + set_int[half_mid - 1]) / 2 : set_int[half_mid];

    if(size % 2 == 0){
        upper_quartile = half_size % 2 == 0 ? (set_int[half_size + half_mid] + set_int[half_size + half_mid - 1
        ]) /2 : set_int[half_size + half_mid];
    } else{
        upper_quartile = half_size % 2 == 0 ? (set_int[half_size + half_mid + 1] + set_int[half_size + half_mid])
                / 2 : set_int[half_size + half_mid + 1];
    }

    streamsize prec = cout.precision();
    cout << "Lower quartile: " << setprecision(3)
         << lower_quartile << endl;
    cout << "median quartile: " << setprecision(3)
         << median << endl;
    cout << "Upper quartile: " << setprecision(3)
         << upper_quartile << endl;
    cout << setprecision(prec);

    return 0;
}
