#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    vector<int> v1;
    
    int val;
    while (cin >> val)
    {   
        v1.push_back(val);
    }

    int i = 0;
    while (i < v1.size())
    {   
        cout << v1[i] << endl;   
        i++;
    }
}