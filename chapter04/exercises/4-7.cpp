//
// Created by Zach on 2022/8/23.
//

#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<double> numbers;
    double x;
    while(cin >> x){
        numbers.push_back(x);
    }

    if(numbers.size() == 0) {
        cout << "Empty vector!" << endl;
    } else{
        double sum = 0;
        for(vector<double>::size_type i = 0; i != numbers.size(); ++i){
            sum += numbers[i];
        }
        cout << "The average of numbers is: " << sum / numbers.size() << endl;
    }

    return 0;
}