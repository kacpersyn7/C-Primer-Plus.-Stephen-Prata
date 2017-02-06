#include<iostream>

int main()
{
    using namespace std;

    cout.setf(ios_base::fixed,ios_base::floatfield);
    long long lswiata;
    long long lpolski;
    cout<<"Podaj liczbe ludnosci swiata: ";
    cin>>lswiata;
    cout<<"Podaj liczbe ludnosci Polski: ";
    cin>>lpolski;
    double wynik = lpolski/(static_cast<double>(lswiata)) * 100;
    cout<<"Populacja Polski stanowi "<<wynik<<" populacji swiata"<<endl;
    return 0;

}
