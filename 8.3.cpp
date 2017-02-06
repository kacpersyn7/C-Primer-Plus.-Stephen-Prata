#include <iostream>
#include <string>

#include <cctype>

using namespace std;
const string & change (string & text);
int main()
{
    string data;
    cout<<"Podaj lancuch: ";
    getline(cin,data);
    do 
    {
        cout<<change(data)<<endl;
        cout<<"Podaj nastepny lancuch (q, aby skonczyc): ";
        getline(cin,data);
       
    }while (data != "q");
    cout<<"Do widzenia \n";
}
const string & change (string & text)
{
    string temp = text;
    for(int i = 0; temp[i] != '\0'; ++i)
        text[i] = toupper(temp[i]);
    return text;
}