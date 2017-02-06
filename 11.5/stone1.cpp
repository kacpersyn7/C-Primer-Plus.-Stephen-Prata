// stone1.cpp -- własne funkcje konwersji
// kompilować z plikiem stonewt1.cpp
#include <iostream>
#include "stonewt.h"

int main()
{
    using std::cout;
    Stonewt poppins(9,2.8);     
    Stonewt poppinse(9,2.8); 
    Stonewt loppins(15.4);   
    cout<< poppins + loppins << "\n";
    cout<< poppins - loppins << "\n";
    cout<< poppinse * poppins << "\n";
    return 0;
}

