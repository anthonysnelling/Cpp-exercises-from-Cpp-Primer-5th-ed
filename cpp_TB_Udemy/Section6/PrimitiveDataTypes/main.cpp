#include <iostream>

using namespace std;

int main()
{
    // Primitive data types

    
    /*****************************************
     * Chars
     * ***************************************/
    // char - exactly one byte. at least 8 bits

    // char16_t  - at least 16 bits

    // char32_t - at least 32 bits

    // wchar_t - Can represent the largest available character set

    char middle_initial { 'M' }; // single quotes for chars
    cout << "Middle initial is " << middle_initial << endl;

    /*****************************************
     *  Integer types
     * ***************************************/
    // - used to represent whole numbers
    // - signed and unsigned versions

    /* type name            size/precision
        signed short int -     at least 16 bits
        signed int -           at least 16 bits
        signed long int -      at least 32 bits
        signed long long int - at least 64 bits

        typen name           size/precision
        unsigned short int      at least 16 bits
        unsigned int            at least 16 bits
        unsigned long int       at least 32 bits
        unsigned long long int  at least 64 bits
    */
    unsigned short int exam_score {55}; // same as unsigned short_exam{55};
    cout << "My exam score was " << exam_score << endl;

    /* Floating point types
    Used to represent non-integer numbers

    Represented by mantissa and exponent (scientific notation)

    Precision is the number of digits in the mantissa

    Precision and size are compiler dependent

    Type Name    size/Typical Precision                     Typical Range
    float        /7 decimal digits                          1.2 x 10^-38 to 3.4 x 10^38
    double       no less than float /15 decimal digits      2.2 x 10^-38 to 1.8 x 10^308
    long double  No less than double / 19 decimal digits    3.3 x 10^-4932 to 1.2 x 10^4932
    */

    /*Boolean type
    Used to represent true and false

    zero is false

    non-zero is true

    Type Name    size/Precision
    bool         Usually 8 bits true or false (C++ keywords)
    */
}