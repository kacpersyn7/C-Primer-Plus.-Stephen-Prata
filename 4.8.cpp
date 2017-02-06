#include<iostream>
#include<string>
struct Pizza
{
    std::string marka;
    double srednica;
    double waga;

};

main()
{
    using namespace std;
    Pizza *dane = new Pizza;
    cout<<"Podaj marke pizzy"<<endl;
    getline(cin,dane->marka);
    cout<<"Podaj srednice pizzy\n";
    cin>>dane->srednica;
    cout<<"Podaj wage pizzy\n";
    cin>>dane->waga;
    cout<<"Pizza jest marki: "<<dane->marka<<" ma srednice: "<<dane->srednica<<" wazy: "<<dane->waga<<"\n";
    delete dane;

}
