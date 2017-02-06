#include <iostream>
#include <fstream>
#include <cstdlib>
const int ROZMIAR = 40;
struct donator
{
    char nazwisko [ROZMIAR];
    double kwota;
};
int main()
{
    using namespace std;
    ifstream inFile;
    inFile.open("plik.txt");
    if(!inFile.is_open())
    {
        exit(EXIT_FAILURE);
    }
    int size, error = 0;
    inFile>>size;
    inFile.get();
    donator *data = new donator [size];
    int count = 0;
    while(inFile.good())
    {
        inFile.getline(data[count].nazwisko, ROZMIAR);
        inFile>>data[count].kwota;
        inFile.get();
        ++count;
    }
    if (inFile.eof())
        cout<<"Koniec pliku\n";
    else if(inFile.fail())
    {
        cout<<"Wczytywanie danych przerwane - blad\n";
        error = 1;
    }
    else
    {
        cout<<"Nieznany blad\n";
        error = 1;
    }
    if(count==0 || error == 1)
        cout<<"Nie przetworzono danych";
    else
    {
        cout<<"Nasi wspaniali sponsorzy\n";
        for(int i = 0; i < size; ++i)
            if(data[i].kwota >= 10000)
                cout<<data[i].nazwisko<<endl;
        cout<<"Nasi sponsorzy\n";
        for(int i = 0; i < size; ++i)
            if(data[i].kwota < 10000)
                cout<<data[i].nazwisko<<endl;
            
    }
    inFile.close();
    delete [] data;
    return 0;
}