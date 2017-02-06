#include<iostream>

int main()
{
    using namespace std;

    cout.setf(ios_base::fixed,ios_base::floatfield);
    const double Inch_to_Meters = 0.0254;
    const double Kg_to_Ibm = 2.2;
    int height_inch;
    int height_foot;
    double mass;
    cout<<"Podaj swoj wzrost \n stopy: ";
    cin>>height_foot;
    cout<<"cale: ";
    cin>>height_inch;
    cout<<"Podaj swoja wage w funtach :";
    cin>>mass;
    height_inch = 12*height_foot + height_inch;
    double height_meters = height_inch * Inch_to_Meters;
    mass = mass/Kg_to_Ibm;
    double bmi = mass / (height_meters*height_meters);
    cout<<"twoj wskaznik BMI wynosi "<<bmi<<endl;
    return 0;

}
