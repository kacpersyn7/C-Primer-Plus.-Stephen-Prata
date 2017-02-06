#include<iostream>
#include<cstring>
using namespace std;

main()
{
    const int ROZMIAR = 30;
    char imie[ROZMIAR];
    char nazwisko[ROZMIAR];
    cout<<"Podaj imie"<<endl;
    cin.getline(imie,ROZMIAR);
    cout<<"Podaj nazwisko"<<endl;
    cin.getline(nazwisko,ROZMIAR);
    char wynik[ROZMIAR];
    strcpy(wynik,nazwisko);
    strcat(wynik,", ");
    strcat(wynik,imie);
    cout<<"Oto informacje zestawione w jeden napis: "<<wynik<<endl;
}
