#include<iostream>
#include<string>
struct Batonik
{
    char marka[20];
    double waga;
    int kalorie;
};

main()
{
    using namespace std;
    Batonik snack = {"Mocha Munch",2.3,350};
    cout<<"Batonik snack jest marki: "<<snack.marka<<" wazy: "<<snack.waga<<" ma: "<<snack.kalorie<<" kalorii \n";
}
