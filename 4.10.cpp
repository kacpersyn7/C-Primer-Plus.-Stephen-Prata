#include<iostream>
#include<array>
main()
{
    const int ROZMIAR = 3;
    using namespace std;
    array<double, ROZMIAR> wyniki;
    cout<<"Podaj pierwszy wynik na 100m \n";
    cin>>wyniki[0];
    cout<<"Podaj pierwszy wynik na 100m \n";
    cin>>wyniki[1];
    cout<<"Podaj pierwszy wynik na 100m \n";
    cin>>wyniki[2];
    cout<<"Pierwszy wynik to: "<<wyniki[0]
        <<"\nDrugi wynik to: "<<wyniki[1]
        <<"\nTrzeci wynik to: "<<wyniki[2]
        <<"\nSrednia wynosi: "<<(wyniki[0] + wyniki[1] + wyniki[2])/ROZMIAR<<endl;
}

