#include <iostream>
#include <cstring>
const int ROZMIAR = 20;
int main()
{
    using namespace std;
    char worlds[ROZMIAR];
    int i = 0;
    cout<<"Podawaj slowa (kiedy skonczysz, napisz \"gotowe\") \n";
    do
    {
        cin>>worlds;
        i++;
    }
    while(strcmp(worlds,"gotowe"));
    cout<<"Podano "<<i-1<<" slow\n";

    return 0;
}
