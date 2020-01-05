#include <iostream>
#include "Sales_item.h"

// bookstore program
int main(){
    Sales_item book;
    // read ISBN, number of copies, and sales prices.
   std::cin >> book;
    // write ISBN, number of copies sold, total revenue, and average price
    std::cout << book << std::endl;
    return 0;
}