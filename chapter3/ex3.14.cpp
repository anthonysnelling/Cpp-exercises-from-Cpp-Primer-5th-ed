#include <iostream>
#include <string>
#include <vector>
using namespace std;
// This program takes in ints into a vector and the prints them

int main(){
    vector<int> v1;
    
    int val;
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