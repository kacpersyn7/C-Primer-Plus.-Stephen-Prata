//arrobj.cpp -- funkcje z obiektami typu array (C++11)
#include <iostream>
#include <string>

// dane stałe
const int Seasons = 4;
const char * Snames [Seasons] =
{"Wiosna", "Lato", "Jesień", "Zima"};

// funkcja modyfikująca tablicę typu array
void fill(double pa []);

// funkcja przetwarzająca tablicę typu array bez ingerencji w jej zawartość
void show(const double da []);

int main()
{
    double expenses [Seasons];
    fill(expenses);
    show(expenses);
    return 0;
}

void fill(double pa[])
{
    using namespace std;
    for (int i = 0; i < Seasons; i++)
    {
        cout << "Podaj wydatki za okres >>" << Snames[i] << "<<: ";
        cin >> pa[i];
    }
}
void show(const double da[])
{
    using namespace std;
    double total = 0.0;
    cout << "\nWYDATKI\n";
    for (int i = 0; i < Seasons; i++)
    {
        cout << Snames[i] << ": " << da[i] << " zł" << endl;
        total += da[i];
    }
    cout << "Łącznie wydatki roczne: " << total << " zł " << endl;
}
