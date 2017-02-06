#include<iostream>
using namespace std;

main()
{
    const int ROZMIAR = 30;
    char imie[ROZMIAR];
    char nazwisko[ROZMIAR];
    int wiek,ocena;
    cout<<"Jak masz na imie"<<endl;
    cin.getline(imie,ROZMIAR);
    cout<<"Jak sie nazywasz"<<endl;
    cin.getline(nazwisko,ROZMIAR);
    cout<<"Na jaka ocene zaslugujesz?"<<endl;
    cin>>ocena;
    cout<<"Ile masz lat?"<<endl;
    cin>>wiek;
    cout<<"Nazwisko: "<<nazwisko<<", "<<imie<<endl;
    cout<<"Ocena: "<<ocena-1<<"\nWiek: "<<wiek<<endl;


}
