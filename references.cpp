#include <iostream>
// This is a file that illustrates the way references can work
// references are essentially an alias for another object, it is not an object itself
// so references define another name for an object.

int main(){

    int ival = 1024;
    int &refVal = ival;

    std::cout << "This is ival, "<< ival << std::endl;
    std::cout << "This is refVal, "<< refVal << std::endl;
    
    refVal = 2;
    int ii = refVal;

    std::cout << "This is ival after refVal has been assigned 2, "<< ival << std::endl;
    std::cout << "This is ii which has been assigned refVal same as ii = ival, "<< ii << std::endl;

    int &refVal3 = refVal;

    std::cout << "this is refVal3, which is bound to the same thing refval which is ival, " << refVal3<<  std::endl;

    return 0;
}