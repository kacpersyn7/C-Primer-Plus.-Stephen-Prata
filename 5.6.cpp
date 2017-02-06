#include<iostream>
#include<string>
main()
{
    using namespace std;
    const int IL_MI  = 12;
    const int IL_LAT  = 3;
    string nazwy[IL_MI] = {
                            "styczen","luty","marzec","kwiecien","maj","czerwiec",
                            "lipiec", "sierpien","wrzesien","pazdziernik","listopad",
                            "grudzien"
                          };
    int liczbasprzedazy[IL_LAT][IL_MI];
    int s[IL_LAT] = {0};
    int suma = 0;
    for(int j = 0;j<IL_LAT;j++)
    {
        cout<<"rok: "<<j+1<<endl;
        for(int i = 0;i<IL_MI;i++)
        {
            cout<<"Podaj liczbe sprzedazy w miesiacu: "<<nazwy[i]<<"\t";
            cin>>liczbasprzedazy[j][i];
            s[j] += liczbasprzedazy[j][i];
        }
    }
    for(int i = 0;i<IL_LAT;i++)
    {
        suma += s[i];
        cout<<"W roku "<<i+1<<" sprzedano: "<<s[i]<<" sztuk\n";
    }
    cout<<"Ogolem sprzedano: "<<suma<<" sztuk\n";
}

