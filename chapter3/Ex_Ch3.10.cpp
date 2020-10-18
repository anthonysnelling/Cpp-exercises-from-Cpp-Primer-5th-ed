#include <iostream>
#include <string>
using namespace std;

// This program removes punctuation from a string 

int main(){
    string str;
    getline(cin,str);
    int index = 0;
    while (index < str.size())
    {
        if (ispunct(str[index]))
        {
            str.erase(index,1);
        }else
        {
            index++;
        }          
    }    
    cout << str << endl;
}