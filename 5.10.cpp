#include <iostream>
#include <string>
int main()
{
    using namespace std;
    int rows;
    cout<<"Podaj liczbe wierszy\n";
    cin>>rows;
    for(int i = 1;i <= rows;i++)
    {
        for(int j = i;j<rows;j++)
            cout<<".";
        for(int j = 1;j<i;j++)
            cout<<"*";
        cout<<endl;
    }

    return 0;
}
