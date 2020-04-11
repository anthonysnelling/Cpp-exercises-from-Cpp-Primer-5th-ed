#include <iostream>
#include <string>

using namespace std;

int main(){
    string str1;
    string str2;

    cout << "Type in two strings to see which one is larger Based on size!" << endl;

    cin >> str1 >> str2;

    auto str1_Size = str1.size();
    auto str2_Size = str2.size();

    if (str1_Size == str2_Size)
    {
        cout << "The two strings are equal" << endl;
    }
    else if (str1_Size > str2_Size)
    {
        cout << "String 1 is larger" << endl;
    }
    else
    {
        cout << "String 2 is larger" << endl;
    }    
}