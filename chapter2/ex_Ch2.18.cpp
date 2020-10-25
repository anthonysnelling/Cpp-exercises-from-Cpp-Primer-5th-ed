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

    pointer = &ref; // changes what the pointer is pointing too
    *pointer = 20; // changes the value of what the pointer is pointing at

    std::cout << "address of pointer: " << pointer << std::endl;
    std::cout << "changed pointer value: " << *pointer << std::endl; 
    std::cout << "changed val2: " << val2 << std::endl;
    
    return 0;
}