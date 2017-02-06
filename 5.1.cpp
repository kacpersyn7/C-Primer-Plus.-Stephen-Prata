#include<iostream>
int main()
{
    using namespace std;
    int x,y;
    cout<<"podaj x\n";
    cin>>x;
    cout<<"podaj y\n";
    cin>>y;
    int suma=0;
    for(x;x<=y;x++)
        suma += x;
    cout<<suma<<endl;
}

