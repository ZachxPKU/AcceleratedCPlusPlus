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
    const int pad  = 1;

    // total number of rows to write
    const int rows = pad * 2 + 3;

    // separate the output from the input
    cout << endl;

    // invariant: we have written r rows so far
    /*
    int r = 0;
    // setting r to 0 makes the invariant true

    while(r != rows) {
        // we can assume that the invariant is true here
        //writing a row of output makes the invariant false
        string::size_type cols = greeting.size() + pad * 2 + 2;
        string::size_type c = 0;
        // invariant: we have written c characters so far in the current row
        while (c != cols) {
            if(r ==0 || r == rows - 1 || c == 0 || c == cols - 1) {
                cout << "*";
                ++c;
            } else{
                // write one or more nonborder characters
                // adjust the value of c to maintain the invariant
                if(r == pad + 1 && c == pad + 1) {
                    cout << greeting;
                    c += greeting.size();
                }else{
                    cout << " ";
                    ++c;
                }
            }

        // write one or more characters
        // adjust the value of c to maintain the invariant
        }
        cout<<endl;

        // incrementing r makes the invariant true again
        ++r;
    }
    // we can conclude that the invariant is true here
*/
    for(int r = 0; r != rows; ++r) {
        string::size_type cols = greeting.size() + pad * 2 + 2;
        string::size_type c = 0;
        while (c != cols) {
            if(r == pad + 1 && c == pad + 1) {
                cout << greeting;
                c += greeting.size();
            } else{
                if(r ==0 || r == rows - 1 || c == 0 || c == cols - 1)
                    cout << "*";
                else
                    cout << " ";
                ++c;
            }
        }
        cout<<endl;
    }
    // we can conclude that the invariant is true here

    return 0;
}