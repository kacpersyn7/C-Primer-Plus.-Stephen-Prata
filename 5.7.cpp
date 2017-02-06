#include<iostream>
#include<string>
struct car
{
    std::string marka;
    int rok;
};
main()
{
    using namespace std;
    cout<<"Ile samochodow chcesz skatalogowac? ";
    int n;
    cin>>n;
    cin.get();
    car *samochody = new car[n];
    for(int i = 0;i<n;i++)
    {
        cout<<"Samochod #"<<i+1<<":\n";
        cout<<"Prosze podac marke: ";
        getline(cin,(samochody+i)->marka);
        cout<<"Rok produkcji: ";
        cin>>(samochody+i)->rok;
        cin.get();

    }
    for(int i = 0;i<n;i++)
    {
        cout<<(samochody+i)->rok<<"\t"<<(samochody+i)->marka<<endl;
    }
    delete [] samochody;
    return 0;
}

