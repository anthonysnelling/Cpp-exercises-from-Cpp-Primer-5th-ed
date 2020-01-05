#include <iostream>

// This just a test for how comments work
int main(){
    std::cout << "/*" << std::endl; // this will print the /* char
    std::cout << "*/" <<std::endl; //  this will print */"
    // std::cout << /* "*/" */; this doesn't work
    std::cout << /* "*/" /* "/*" */; // this will print _/*
}