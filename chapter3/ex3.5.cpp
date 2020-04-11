#include <iostream>
#include <string>

using namespace std;

int main(){
    cout << "this program concatenates different string into one. Type some in!" << endl;

    string str;
    string concat = "";

    while (cin >> str)
    {
        concat += str + " ";
    }
    cout << "This is the concatenation" << endl;
    cout << concat << endl;    
}