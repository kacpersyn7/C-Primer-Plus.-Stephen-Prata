#include<iostream>

int main()
{
    using namespace std;

    //cout.setf(ios_base::fixed,ios_base::floatfield);
    const int Sekundy_na_Minuty = 60;
    const int Minuty_na_Stopnie = 60;
    int stopnie;
    double minuty;
    double sekundy;
    cout<<"Podaj dlugosc w stopniach, minutach i sekundach:\nNajpierw podaj stopnie: ";
    cin>>stopnie;
    cout<<"Nastepnie podaj minuty stopnia luku: ";
    cin>>minuty;
    cout<<"Nastepnie podaj sekundy luku: ";
    cin>>sekundy;
    double wynik = stopnie + (minuty/Minuty_na_Stopnie) + (sekundy/(Minuty_na_Stopnie*Sekundy_na_Minuty));
    cout<<stopnie<<" stopni, "<<minuty<<" minut, "<<sekundy<<" sekund = "<<wynik<<" stopni"<<endl;
    return 0;

}
