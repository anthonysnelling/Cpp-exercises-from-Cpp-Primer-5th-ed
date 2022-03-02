#include <iostream>

using namespace std;

//Variable initializations
//int age = 21;  C-like initialization 
//int age (21);  Constructor initialization 
//int age {21};  C++11 list initialization syntax 

int main(){
    
    cout << "Enter the width of the room: " << endl;
    int room_width {0};
    cin >> room_width;
    
    cout << "Enter the length of the room: " << endl;
    int room_length {0};
    cin >> room_length;
    
    cout << "The area of the room is: "  << room_length * room_width << " square feet" << endl;
    
    return 0;
}