#include <iostream>
#include <string>
using namespace std;
// this program transforms a string to "X's"

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