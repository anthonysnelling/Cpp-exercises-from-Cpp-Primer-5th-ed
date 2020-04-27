#include <iostream>
#include <string>
using namespace std;

int main(){
    string str = "Hello There!";
    char x = 'X';
    for(auto &c : str){

        c = x;
    }
    cout << str << endl;
}