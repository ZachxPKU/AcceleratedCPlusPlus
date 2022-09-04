//
// Created by Zach on 2022/9/4.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> u(10, 100);

    vector<int> v;

//    copy(u.begin(), u.end(), back_inserter(v));

    copy(u.begin(), u.end(), inserter(v, v.begin()));

    vector<int>::const_iterator iter = v.begin();

    while(iter != v.end()){
        cout << *(iter++) << endl;
    }

    return 0;
}
