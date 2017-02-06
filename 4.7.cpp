#include<iostream>
#include<string>
const int ROZMIAR = 20;
struct Pizza
{
    char marka[ROZMIAR];
    double srednica;
    double waga;

};

main()
{
    using namespace std;
    Pizza dane;
    cout<<"Podaj marke pizzy"<<endl;
    cin.getline(dane.marka,ROZMIAR);
    cout<<"Podaj srednice pizzy\n";
    cin>>dane.srednica;
    cout<<"Podaj wage pizzy\n";
    cin>>dane.waga;
    cout<<"Pizza jest marki: "<<dane.marka<<" ma srednice: "<<dane.srednica<<" wazy: "<<dane.waga<<"\n";

}
