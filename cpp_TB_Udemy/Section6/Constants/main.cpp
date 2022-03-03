// section 6
// constants

#include <iostream>
using namespace std;

/*
 * Franks carpet cleaning service
 * charges $30 per room
 * sales tax is 6%
 * estimates are valid for 30 days
 *
 * prompt the user for the number of rooms they would like cleaned
 *
 * and provide an estimate such as:
 *
 * Estimate for carpet cleaning service:
 * Number of rooms: 2
 * price per room: $30
 * Cost: $60
 * Tax: $3.6
 *
 * ==============================
 * Total estimate: $63.6
 * This estimate is valid for 30 days
 *
 * Pseudocode:
 * prompt the user to enter the number of rooms
 * display number of rooms
 * display price per room
 *
 */

int main()
{
    cout << "Hello welcome to Tony's Carpet cleaning service" << endl;
    cout << "\nHow many small rooms would you like to clean?" << endl;

    int numOfSmallRooms {};
    cin >> numOfSmallRooms;

    cout << "\nHow many large rooms would you like to clean?" << endl;
    int numOfLargeRooms {};
    cin >> numOfLargeRooms;

    const double pricePerSmallRoom { 25 };
    const double pricePerLargeRoom { 35 };
    const double salesTax { 0.06 };
    const int estimateExpiry { 30 };

    cout << "\nEstimate for carpet cleaning service" << endl;
    cout << "Number of Small rooms: " << numOfSmallRooms << endl;
    cout << "Number of Large rooms: " << numOfLargeRooms << endl;
    cout << "Price per Small room: $" << pricePerSmallRoom << endl;
    cout << "Price per Large room: $" << pricePerLargeRoom << endl;
    cout << "Cost: $" << (pricePerSmallRoom * numOfSmallRooms) + (pricePerLargeRoom * numOfLargeRooms) << endl;
    cout << "Tax: $" << ((pricePerSmallRoom * numOfSmallRooms) + (pricePerLargeRoom * numOfLargeRooms)) * salesTax
         << endl;
    cout << "========================================" << endl;
    cout << "Total Estimate: $"
         << ((pricePerSmallRoom * numOfSmallRooms) + (pricePerLargeRoom * numOfLargeRooms)) +
            ((pricePerSmallRoom * numOfSmallRooms) + (pricePerLargeRoom * numOfLargeRooms)) * salesTax
         << endl;
    cout << "This estimate is valid for " << estimateExpiry << " days" << endl;

    return 0;
}
