// instr2.cpp -- wczytanie za pomocą getline nie tylko pojedynczych słów
#include <iostream>
#include <string>
int main()
{
    using namespace std;

    string name;
    string dessert;

    cout << "Podaj swoje imię:\n";
    getline(cin, name);  // wczytuje dane do znaku nowego wiersza
    cout << "Podaj swój ulubiony deser:\n";
    getline(cin, dessert);
    cout << "Mam dla ciebie " << dessert;
    cout << ", " << name << ".\n";
    return 0;
}
