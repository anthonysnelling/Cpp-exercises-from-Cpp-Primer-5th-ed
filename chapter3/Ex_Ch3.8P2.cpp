#include <iostream>
#include <string>
using namespace std;

int main(){
    string str = "Hello There!";
    char x = 'X';
    for(int i = 0; i < str.size(); i++){
        str[i] = 'X';
    }
    cout << str << endl;
}