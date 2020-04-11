#include <iostream>
#include <string>

using namespace std;

int main(){
    string str1;
    string str2;

    cout << "Type in two strings to see which one is larger Based on string comparisons!" << endl;

    cin >> str1 >> str2;

    if (str1 == str2)
    {
        cout << "The two strings are equal" << endl;
    }
    else if (str1 > str2)
    {
        cout << "String 1 is larger" << endl;
    }
    else
    {
        cout << "String 2 is larger" << endl;
    }    
}