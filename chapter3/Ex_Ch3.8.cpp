#include <iostream>
#include <string>
using namespace std;

int main(){
    string str = "Hello There!";
    char x = 'X';

    int i = 0;
    while(i < str.size()){
        str[i] = 'X';
        i++;
    }
    cout << str << endl;
}