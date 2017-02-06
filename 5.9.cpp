#include <iostream>
#include <string>
int main()
{
    using namespace std;
    string worlds;
    int i = 0;
    cout<<"Podawaj slowa (kiedy skonczysz, napisz \"gotowe\") \n";
    do
    {
        cin>>worlds;
        i++;
    }
    while(worlds != "gotowe");
    cout<<"Podano "<<i-1<<" slow\n";

    return 0;
}
