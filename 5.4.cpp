#include<iostream>
main()
{
    using namespace std;
    const double IL_ZL  = 100.0;
    double cleo=IL_ZL,dafne=IL_ZL;
    int rok=1;
    for(rok;cleo <= dafne;rok++)
    {
        dafne += IL_ZL*0.1;
        cleo += cleo*0.05;
        cout<<"po "<<rok<<" dafne: "<<dafne<<" cleo: "<<cleo<<endl;
    }
    cout<<"inwestcje Cleo przekrocza Dafne po "<<rok-1<<" latach\n";
}

