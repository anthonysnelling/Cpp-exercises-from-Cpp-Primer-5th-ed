#include <iostream>
#include "../Bookstore/Sales_item.h"

int main(){
    Sales_item value, firstVal;

    // tales in first value to preserve ISBN
    std::cin >> firstVal;
    // start a loop with that takes values
    while (std::cin >> value)
    { 
        // add new values of the same ISBN
        firstVal += value;            
    }    
    std::cout << firstVal << std::endl;
    return 0;
}