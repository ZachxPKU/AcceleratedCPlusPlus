//
// Created by Zach on 2022/8/9.
//
#include <string>

int main(){
    const std::string exclam = "!";  //valid
    const std::string message = "Hello" + ", world" + exclam; //invalid, ("Hello" + ", world") is invalid
    return 0;
}