#include <iostream>
#include <string>
using namespace std;
const int SIZE = 40;
struct Batonik
{
    string mark_s;
    double weight_s;
    int calories_s;
};
void change (Batonik & sample, const string & mark  = "Millennium Munch", double weight = 2.85, int calories = 350);
void show(const Batonik & sample);
int main()
{
    string mark_m;
    double weight_m;
    int calories_m;
    cout<<"Podaj liczbe batonikow"<<endl;
    int n;
    (cin>>n).get();
    Batonik *baton = new Batonik[n];
    for(int i = 0; i < n; ++i)
    {
        cout<<"Podaj marke batona nr"<<i+1<<" ";
        getline(cin,mark_m);
        if(mark_m == "")
            change(baton[i]);
        else
        {
            cout<<"Podaj wage: "; 
            (cin>>weight_m).get();
            cout<<"Podaj kalorie: ";
            (cin>>calories_m).get();
            change(baton[i], mark_m, weight_m, calories_m);
        }
    }
    for(int i = 0; i < n; ++i)
        show(baton[i]);
    delete [] baton;
    return 0;
}
void change (Batonik & sample, const string & mark, double weight, int calories)
{
    sample.mark_s = mark;
    sample.weight_s = weight;
    sample.calories_s = calories;
}
void show(const Batonik & sample)
{
    cout<<"Batonik marki: "<<sample.mark_s<<"\n"
        "Wazy: "<<sample.weight_s<<"\n"
        "Ma: "<<sample.calories_s<<" kalorii\n";
}
