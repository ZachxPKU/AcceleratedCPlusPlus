//
// Created by Zach on 2022/8/9.
//

#include <iostream>
#include <string>

int main(){
    {
        std::string s = "s string";
        {
            std::string x = s + ", really";
            std::cout << s << std::endl;
        }
        std::cout << x << std::endl;    //error: 'x' was not declared in this scope
        return 0;
    }
}//invalid