#include <iostream>
#include <cstdlib>
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
    
    //this should print out the 42 since the address of ival holds 42
    std::cout << *p << std::endl;

    // we can change ival at a later time and p will still point to what is in ival
    ival = 108;
    std::cout << *p << " This is an updated ival that p points too"<< std::endl;

// pointers must point to an object of the same type!
    double dVal; // OK
    double *pd = &dVal; //OK
    double *pd2 = pd; // OK
    // int *pi = pd; // this would cause an error 
    // pi = &dval; // as well as this
    
    // the value(address) of a pointer can point to:

    // 1. an object
    // 2. the location immediately past the end of an object
    // 3. be null, indicating it is not bound to any object

    // ----- USING A POINTER ACCESS AN OBJECT

    // when a pointer points to an object you can use the dereference operator *
    // to access that object:

    int ival2 = 24;
    int *p2 = &ival2; // p2 hold the address of ival2, p2 is a pointer to ival2 
    std::cout << *p2 << std::endl; // should print 24

    // you can use pointers to change the object it points too as well
    *p2 = 0; // when you assign to *p2, you are assigning to object is points too
    std::cout << ival2 << " This is ival2" << std::endl;
    std::cout << *p2 << " This is *p2" << std::endl;

    // ------ NULL POINTERS ------

    // null pointers do not point to an object
    int *p3 = nullptr; // same as *p3 = 0
    int *p4 = 0; // Directly initializes *p4 from the literal constant 0
    //must include #cstdlib
    int *p5 = NULL;

    // it is generally good advice to initialize your variables and pointers.
    // a lot of problems occur when trying to point to something that hasn't been initialized.
    // So it is generally good to only point to an object that has been initialized or make a nullptr
    // so you do not get compiler errors

    // TODO: Talk about references in relation to pointers and special pointer tyoes

    return 0;
}