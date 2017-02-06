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
    Batonik snack[3] = {
                        {"Mocha Munch",2.3,350},
                        {"umchas cus",2.4,370},
                        {"hue hue",2.54,450}
                        };
    cout<<"Batonik snack pierwszy jest marki: "<<snack[0].marka<<" wazy: "<<snack[0].waga<<" ma: "<<snack[0].kalorie<<" kalorii \n";
    cout<<"Batonik snack drugi jest marki: "<<snack[1].marka<<" wazy: "<<snack[1].waga<<" ma: "<<snack[1].kalorie<<" kalorii \n";
    cout<<"Batonik snack trzeci jest marki: "<<snack[2].marka<<" wazy: "<<snack[2].waga<<" ma: "<<snack[2].kalorie<<" kalorii \n";
}
