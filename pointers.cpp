#include <iostream>
// this a program to go over some of details of pointers

// a pointer is a compound type that "points" to another. unlike references
// pointers are objects. pointers can be assigned and copied, a single pointer
// can point to several different objects over its lifetime. 
// a pointer doesn't need to be initialized when it is defined.

int main(){
    int *ip1, *ip2; // both are pointers to int
    double dp, *dp2; // dp is a double and dp2 is a pointer to double.

    // a pointer holds the address of an object 
    int ival = 42;
    // you can use '&' (address of operator) to get the address of an object
    int *p = &ival; // p holds the address of ival; p is a pointer to ival
    
    std::cout << *p << std::endl;

// pointers must point to an object of the same type!
    double dVal; // OK
    double *pd = &dVal; //OK
    double *pd2 = pd; // OK
    // int *pi = pd; // this would cause an error
    // pi = &dval; // as well as this
    
    //TODO: Continue to talk about pointer values

    return 0;
}