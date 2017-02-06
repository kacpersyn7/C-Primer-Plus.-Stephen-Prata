#include <iostream>
using namespace std;
const int SIZE = 20;
int il = 0;
void show(const char * text,int n = 0);
int main()
{
    int number;
    char napis[SIZE];
    cin>>napis;
    cin>>number;
    show(napis);
    show(napis,number);
    show(napis,number);
    return 0;
}
void show(const char * text, int n) 
{
    if(n)
        n = il;
    for (int i = 0; i < n; ++i)
        cout<<text<<endl;
    ++il;
}