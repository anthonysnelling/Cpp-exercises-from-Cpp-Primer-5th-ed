#include <iostream>

// code that changes the value of a pointer and code that changes 
// the value to which the pointer points
int main(){
    int val1 = 14;
    int val2 = 42;
    int &ref = val2;
    int *pointer = &val1;

    std::cout << "address of pointer: " << pointer << std::endl;
    std::cout << "val1: " << val1 << std::endl;
    std::cout << "pointer: " << *pointer << std::endl; 

    std::cout << "ref: " << ref << std::endl; 
    std::cout << "&ref: " << &ref << std::endl; 
    std::cout << std::endl; 

    pointer = &ref; // changes what the pointer is pointing too
    *pointer = 20; // changes the value of what the pointer is pointing at

    std::cout << "address of pointer: " << pointer << std::endl;
    std::cout << "changed pointer value: " << *pointer << std::endl; 
    std::cout << "changed val2: " << val2 << std::endl;
    
    std::cout << std::endl; 
    std::cout << "Some other examples of changing values"<< std::endl; 
    int val3 = 12;
    int* pointer2 = &val3;
    int& ref2 = val3;
    std::cout << "val3: " << val3 << std::endl;
    std::cout << "ref2: " << ref2 << std::endl;
    std::cout << "&ref2: " << &ref2 << std::endl;
    std::cout << "pointer: " << pointer2 << std::endl;
    std::cout << "*pointer: " << *pointer2 << std::endl;

    std::cout << std::endl; 
    std::cout << "changing val3 using a pointer"<< std::endl; 
    *pointer2 = 24;
    std::cout << "pointer change val3: " << val3 << std::endl; 
    std::cout << "changing val3 but with reference"<< std::endl; 
    ref2 = 99; 
    std::cout << "reference change val3: " << val3 << std::endl; 

    return 0;
}