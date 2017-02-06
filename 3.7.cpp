#include<iostream>

int main()
{
    using namespace std;

    cout.setf(ios_base::fixed,ios_base::floatfield);
    const double Stokm_na_Mile = 62.14;
    const double Galon_na_Litr = 3.875;
    double ilitrownakm;
    cout<<"Podaj zuzycie benzyny (il litrow na 100 km) ";
    cin>>ilitrownakm;
    double ilgalonow = ilitrownakm / Galon_na_Litr;
    double wynik = Stokm_na_Mile/ilgalonow;
    cout<<"Ilosc mil na galon wynosi: "<<static_cast<int>(wynik)<<endl;
    return 0;

}
