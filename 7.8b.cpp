//arrobj.cpp -- funkcje z obiektami typu array (C++11)
#include <iostream>
#include <string>

// dane stałe
const int Seasons = 4;
const char * Snames [Seasons] =
{"Wiosna", "Lato", "Jesień", "Zima"};
struct data
{
    double exp [Seasons];
};
// funkcja modyfikująca tablicę typu array
void fill(data *pa);

// funkcja przetwarzająca tablicę typu array bez ingerencji w jej zawartość
void show(const data da);

int main()
{
    data expenses;
    fill(&expenses);
    show(expenses);
    return 0;
}

void fill(data *pa)
{
    using namespace std;
    for (int i = 0; i < Seasons; i++)
    {
        cout << "Podaj wydatki za okres >>" << Snames[i] << "<<: ";
        cin >> pa->exp[i];
    }
}
void show(const data da)
{
    using namespace std;
    double total = 0.0;
    cout << "\nWYDATKI\n";
    for (int i = 0; i < Seasons; i++)
    {
        cout << Snames[i] << ": " << da.exp[i] << " zł" << endl;
        total += da.exp[i];
    }
    cout << "Łącznie wydatki roczne: " << total << " zł " << endl;
}
