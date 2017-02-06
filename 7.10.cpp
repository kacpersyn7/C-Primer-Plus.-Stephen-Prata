#include <iostream>
const int NUM = 3;
double add(double x, double y);
double multiple(double x, double y);

double subtract(double x, double y);
double calcuate(double x, double y, double (*pf)(double,double));

int main ()
{
    using namespace std;
    double x,y;
    double (*pf[NUM])(double, double) = {add,multiple,subtract};
    cout<<"Podaj dwie liczby\n";
    cin>>x>>y;
    for(int i = 0; i < NUM; ++i)
    {
        cout<<"Wynik dzialania funkcji numer"<<i+1<<endl;
        cout<<calcuate(x,y,pf[i])<<endl;
    }
    return 0;
}
double add(double x, double y)
{
    return x + y;
}
double subtract(double x, double y)
{
    return x - y;
}
double multiple(double x, double y)
{
    return x*y;
}
double calcuate(double x, double y, double (*pf)(double,double))
{
    return (*pf)(x,y);
}