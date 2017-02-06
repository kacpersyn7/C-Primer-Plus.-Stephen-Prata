#include<iostream>

int main()
{
    using namespace std;

    cout.setf(ios_base::fixed,ios_base::floatfield);
    int ilkm;
    int ill;
    cout<<"Podaj ilosc km: ";
    cin>>ilkm;
    cout<<"Podaj ilosc litrow: ";
    cin>>ill;
    double wynik = (static_cast<double>(ill)) / (double(ilkm)) * 100;

    cout<<wynik<<endl;
    return 0;

}
