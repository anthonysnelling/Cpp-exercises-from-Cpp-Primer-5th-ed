#include <iostream>

// A countdown using a while loop
int main(){
    int count= 10;
    std::cout << "This is a countdown!" << std::endl;
    while (count >= 0)
    {
        std::cout << count << std::endl;
        --count;
    }    
}