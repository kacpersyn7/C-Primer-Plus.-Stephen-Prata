#include<iostream>
using namespace std;

main()
{
    const double Centymetry_na_stopy = 30.48;
    int wzrost;
    cout<<"Podaj swoj wzrost w centymetrach"<<endl;
    cin>>wzrost;
    int stopy = wzrost/Centymetry_na_stopy;
    int cale = wzrost % Centymetry_na_stopy;
    cout<<"masz "<<stopy<<"stop i "<<cale<<"cali\n";


}
