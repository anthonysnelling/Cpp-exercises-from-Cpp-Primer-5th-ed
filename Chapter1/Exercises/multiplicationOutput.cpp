#include <iostream>

// just multiplies to numbers the user inputs
int main(){
    std::cout << "Input two numbers to multiply!" << std::endl;
    int input1, input2;
    std::cin >> input1 >> input2;
    std::cout << "You're output is... " << input1 * input2 << std::endl;
    return 0;
}