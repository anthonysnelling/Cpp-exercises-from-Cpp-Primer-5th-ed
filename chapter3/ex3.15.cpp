#include <iostream>
#include <string>
#include <vector>
using namespace std;
// this program reads in strings into a vector and then prints them

int main(){
    vector<string> v1;
    
    string val;
    while (cin >> val)
    {   
        v1.push_back(val);        
    }

    cout << endl;
    int i = 0;
    while (i < v1.size())
    {   
        cout << v1[i] << endl;   
        i++;
    }
}