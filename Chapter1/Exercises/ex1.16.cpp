// prints the sum of a set of read in numbers
#include <iostream>

int main(){
    int sum=0, value=0;
    std::cout << "Input some values to add together" << std::endl;
    while (std::cin >> value){
        sum += value;
    }
    std::cout << "The sum of your set of numbers is: " << sum << std::endl;
    return 0;
}