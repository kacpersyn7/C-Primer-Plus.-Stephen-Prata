#include<iostream>

int main()
{
    using namespace std;

    //cout.setf(ios_base::fixed,ios_base::floatfield);
    const int Godziny_w_Dniu = 24;
    const int Minuty_w_Godzinie = 60;
    const int Sekundy_w_Minucie = 60;
    long long sekundy;
    cout<<"Podaj liczbe sekund: ";
    cin>>sekundy;
    int idni = sekundy / (Godziny_w_Dniu*Minuty_w_Godzinie*Sekundy_w_Minucie);
    int igodzin = (sekundy%(Godziny_w_Dniu*Minuty_w_Godzinie*Sekundy_w_Minucie))/(Minuty_w_Godzinie*Sekundy_w_Minucie) ;
    int iminut = (sekundy%(Minuty_w_Godzinie*Sekundy_w_Minucie))/Sekundy_w_Minucie;
    int isekund = sekundy % Sekundy_w_Minucie;

    //double wynik = stopnie + (minuty/Minuty_na_Stopnie) + (sekundy/(Minuty_na_Stopnie*Sekundy_na_Minuty));
    cout<<sekundy<<" sekund = "<<idni<<" dni, "<<igodzin<<" godzin, "<<iminut<<" minut "<<isekund<<" sekund"<<endl;
    return 0;

}
