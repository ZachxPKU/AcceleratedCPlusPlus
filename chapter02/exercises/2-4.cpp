//
// Created by Zach on 2022/8/11.
//

#include <iostream>
#include <string>
using namespace std;
int main()
{
    // ask for the person's name
    cout << "Please enter your first name: ";
    // read the name
    string name;
    cin >> name;
    // build the message that we intend to write
    const string greeting = "Hello, " + name + "!";
    // we have to rewrite this part...
    // the number of blanks surrounding the greeting
    int pad = 0;
    cout << "Please enter the amount of spacing to leave between the frame and the greeting: ";
    cin >> pad;

    // total number of rows to write
    const int rows = pad * 2 + 3;

    // separate the output from the input
    cout << endl;

    const string space(greeting.size() + pad * 2, ' ');

    for(int r = 0; r != rows; ++r) {
        string::size_type cols = greeting.size() + pad * 2 + 2;
        string::size_type c = 0;
        while (c != cols) {
            if(r == pad + 1 && c == pad + 1) {
                cout << greeting;
                c += greeting.size();
            } else{
                if(r ==0 || r == rows - 1 || c == 0 || c == cols - 1) {
                    cout << "*";
                    ++c;
                }
                else {
                    if(r == pad + 1) {
                        cout << " ";
                        ++c;
                    }else{
                        cout << space;
                        c += space.size();
                    }
                }
            }
        }
        cout<<endl;
    }
    // we can conclude that the invariant is true here

    return 0;
}