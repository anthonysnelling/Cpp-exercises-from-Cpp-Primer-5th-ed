#include <iostream>

// Just prints a range of numbers that the user inputs using a while loop
// This one handles numbers inputs where the first number is larger than the second.
int main(){
    int input1 =0, input2 =0, count=0;
    std::cout << "Input the range of numbers you want to print out" << std::endl;
    std::cin >> input1 >> input2;
    std::cout << std::endl;

    count = input1;
    if (input1 < input2)
    {
        while (count <= input2){
            std::cout << count << std::endl;
            ++count;
        }
    }

    if (input1 > input2)
    {
        while (count >= input2)
        {
            std::cout << count << std::endl;
            --count;
        }
    }

    if (input1 == input2)
    {
        std::cout << "Please input numbers that are not the same" << std::endl;
    }
}
    
    