#include <iostream>
#include <string>
#include "Sales_data.h"

int main(){
    Sales_data data1, data2;
    double price = 0; // price per book to read in total revenue
    // read the transactions: ISNB, number of books sold, price per book.
    std::cin >> data1.bookNO >> data1.units_sold >> price;
    // calculate the total revenue from price and units sold
    data1.revenue = data1.units_sold * price;    

    // read into data2
    std::cin >> data2.bookNO >> data2.units_sold >> price;
    data2.revenue = data2.units_sold * price;   

    // check if ISBN's are the same and print sum
    if(data1.bookNO == data2.bookNO){
        unsigned totalCnt = data1.units_sold + data2.units_sold;
        double totalRevenue = data1.revenue + data2.revenue;
        // print:ISBN, total Sold, total revenue, average price per book.
        std::cout << data1.bookNO << " " << totalCnt << " " << totalRevenue << " ";
        if (totalCnt != 0)
        {
            std::cout << totalRevenue/totalCnt << std::endl;
        }else
        {
            std::cout << "(no sales)" << std::endl;
            return 0; //indicate success
        }
    }else
    {
        std::cerr << "Data must refeer to the same ISBN" << std::endl;
        return -1; // indicate failure
    }
}