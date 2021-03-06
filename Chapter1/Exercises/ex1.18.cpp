#include<iostream>

int main(){
    std::cout << "Input some numbers to count the occurrence of each in a row" << std::endl;
    // currVal is the number we're counting; we'll read new values into val
    int currVal = 0, val = 0;
    // read first number and ensure that we have data to process
    if (std::cin >> currVal)
    {
        int cnt = 1; // store the count for the current value we;re processing
        while (std::cin >> val) // read the remaining numbers
        {
            if (val == currVal) // if the values are the same
            {
                ++cnt;          // add 1 to cnt
            }
            else
            {
                std::cout << currVal << " occurs " << cnt << " times" << std::endl;
                currVal = val; // remember the new value
                cnt=1;
            }
        }
            std::cout << currVal << " occurs " << cnt << " times" << std::endl;
    }
    return 0;
}