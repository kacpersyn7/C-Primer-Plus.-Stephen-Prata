#include<iostream>
#include<string>
main()
{
    using namespace std;
    const int IL_MI  = 12;
    string nazwy[IL_MI] = {
                            "styczen","luty","marzec","kwiecien","maj","czerwiec",
                            "lipiec", "sierpien","wrzesien","pazdziernik","listopad",
                            "grudzien"
                          };
    int liczbasprzedazy[IL_MI];
    int s = 0;
    for(int i = 0;i<IL_MI;i++)
    {
        cout<<"Podaj liczbe sprzedazy w miesiacu: "<<nazwy[i]<<endl;
        cin>>liczbasprzedazy[i];
        s += liczbasprzedazy[i];
    }
    cout<<"W calym roku sprzedano: "<<s<<" sztuk \n";
}

