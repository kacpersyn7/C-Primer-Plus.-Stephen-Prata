#include<iostream>

main()
{
    using namespace std;
    int x,s=0;
    do
    {
        cout<<"Podaj liczbe, 0 konczy dzialanie\n";
        cin>>x;
        s += x;
    }
    while(x!=0);
    cout<<"suma wynosi: "<<s<<endl;
}

