#include <iostream>

using namespace std;

int main()
{
    // an empty array of 5 integers
    int test_score[5];

    // initializing an array
    int Hi_Score[5] { 100, 95, 99, 87, 88 };

    // initializes first 2 to 20 and 10 and rest to 0
    int Low_Score[5] { 20, 10 };

    const double daysInYear { 365 };

    // making an array of 365 doubles and initializing all them to 0
    double hi_Temperatures[(unsigned long)daysInYear] { 0 };

    // Size automatically calculated
    int another_array[] { 1, 2, 3, 4, 5 };

    char vowels[] { 'a', 'e', 'i', 'o', 'u' };

    cout << vowels[0] << endl;
    cout << Hi_Score[0] << endl;
    cin >> hi_Temperatures[0];
    cout << hi_Temperatures[0] << endl;

    for(int i { 0 }; i < 5; i++) {
        cout << Hi_Score[i] << endl;
    }
    
    // Prints out the memory address of the array
    cout << Hi_Score << endl;
    

    return 0;
}
