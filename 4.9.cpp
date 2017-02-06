#include<iostream>
#include<string>
struct Batonik
{
   std::string marka;
    double waga;
    int kalorie;
};

main()
{
    using namespace std;
    Batonik *snack = new Batonik[2];
    snack[0].marka = "jakas tam";
    snack[0].waga = 1.1;
    snack[0].kalorie = 234;
    snack[1].marka = "jakas tam";
    snack[1].waga = 1.3;
    snack[1].kalorie = 453;
    cout<<"Batonik pierwszy jest marki: "<<snack[0].marka<<" wazy: "<<snack[0].waga<<" ma: "<<snack[0].kalorie<<" kalorii \n";
    cout<<"Batonik drugi jest marki: "<<snack[1].marka<<" wazy: "<<snack[1].waga<<" ma: "<<snack[1].kalorie<<" kalorii \n";
    delete [] snack;
}
