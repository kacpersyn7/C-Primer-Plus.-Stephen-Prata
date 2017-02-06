#include<iostream>
#include<string>


main()
{
    using namespace std;
    string imie;
    string nazwisko;

    cout<<"Podaj imie"<<endl;
    getline(cin,imie);
    cout<<"Podaj nazwisko"<<endl;
    getline(cin,nazwisko);
    string wynik = imie + ", " + nazwisko;
    cout<<"Oto informacje zestawione w jeden napis: "<<wynik<<endl;
}
