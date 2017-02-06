#include <iostream>
using namespace std;
#include <cstring>
struct stringy
{
    char * str; //wskazuje lancuch
    int ct;//dlugosc lancucha bez '\0'
};
void set(stringy & stru, const char * text);
void show(const char * text, int n = 1);
void show(const stringy & text, int n = 1);
int main()
{
    stringy beany;
    char testing[] = "Rzeczywistosc to juz nie to, co kiedys";
    set(beany, testing);
    show(beany);
    show(beany,2);
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing,3);
    show("Gotowe!");
    delete [] beany.str;
    return 0;
}
void set(stringy & stru, const char * text)
{
    stru.ct = strlen(text);
    stru.str = new char[stru.ct];
    strcpy(stru.str,text);
}
void show(const char * text, int n)
{
    for(int i = 0; i < n; ++i)
        cout<<text<<endl;
}
void show(const stringy & text, int n)
{
    for(int i = 0; i < n; ++i)
        cout<<text.str<<endl;
}