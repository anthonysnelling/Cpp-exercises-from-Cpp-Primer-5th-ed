//Section 5
//Basic I/O using cin and cout

#include <iostream>

//if you want to use everything from the std library vvv
//using namespace std;
using std::cout;
using std::cin;
using std::endl;

int main(){
    cout << "Hello World!" << endl;
    
    cout << "Hello";
    cout << "World" << endl;
    
    cout << "Hello world" << endl;
    cout << "Hello" << "World" << endl;
    cout << "Hello" << "World\n";
    cout << "Hello\nout\nthere\n";
    
    int num1;
    int num2;
    double num3;
    
//    cout << "Enter an integer ";
//    cin >> num1;
//    cout << "You entered: " << num1 << endl;
//    
//    cout << "Enter a first integer ";
//    cin >> num1;
//    
//    cout << "Enter a second integer ";
//    cin >> num2;
    
//    cout << "You entered " << num1 << " and "  << num2 << endl;
    
//    cout << "Enter 2 integers separated by a space: " << endl;
//    cin >> num1 >> num2;
//    cout << "You entered " << num1 << " and " << num2 << endl; 

    cout << "Enter a double: ";
    cin >> num3;
    
    cout << "You entered: " << num3 << endl;

    return 0;
}