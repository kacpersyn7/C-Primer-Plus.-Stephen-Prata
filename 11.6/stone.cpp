// stone1.cpp -- własne funkcje konwersji
// kompilować z plikiem stonewt1.cpp
#include <iostream>
#include "stonewt.h"

int main()
{
    using std::cout;
    using std::cin;
    Stonewt pattern(11,0.0);
    Stonewt tab[6] = {6.2, 5.2, 1.1};
    int min = 0, max = 0, k = 0;
    for(int i = 0; i < 3; ++i)
    	cin>>tab[i+3];
    for(int i = 0; i < 6; ++i)
    {
    	if(tab[i] > tab[max])
    		max = i;
    	if(tab[i] < tab[min])
    		min = i;
    	if(tab[i] > pattern)
    		k++;
    }
    cout<<"max: "<<max<<" min: "<<min<<" powyzej 11: "<<k<<"\n";
    return 0;
}

