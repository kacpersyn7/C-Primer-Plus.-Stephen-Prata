// arrfun3.cpp -- funkcje obsługujące tablica i const
#include <iostream>
const int Max = 5;

// prototypy funkcji
double * fill_array(double  * begin, double * limit);
void show_array(const double  * begin, const double * end);  // nie zmienia danych
void revalue(double r, double  * begin, double * end);

int main()
{
    using namespace std;
    double properties[Max];

    double * size = fill_array(properties,properties + Max);
    show_array(properties, size);
    if (size > 0)
    {
        cout << "Podaj czynnik zmiany wartości: ";
        double factor;
        while (!(cin >> factor)) // nieliczbowa wartość na wejściu
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Niepoprawna wartość; podaj liczbę: ";
        }
        revalue(factor, properties, size);
        show_array(properties, size);
    }
    cout << "Gotowe.\n";
    cin.get();
    cin.get();
    return 0;
}

double * fill_array(double  * begin, double * limit)
{
    using namespace std;
    double temp;
    double * pt;
    int i = 0;
    for (pt = begin; pt != limit; pt++)
    {
        cout << "Podaj wartość nr " << (i + 1) << ": ";
        cin >> temp;
        if (!cin)    // błędne dane
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
           cout << "Błędne dane, wprowadzanie danych przerwane.\n";
           break;
        }
        else if (temp < 0)     // nakaz zakończenia
            break;
        *pt = temp;
        ++i;
    }
    return pt;
}

// poniższa funkcja może użyć tablicy, której adres przekazano
// w ar, ale nie może jej modyfikować
void show_array(const double  * begin, const double * end)
{
   using namespace std;
   const double * pt;
   int i = 0;
   for (pt = begin; pt != end; pt++)
    {
        cout << "Nieruchomość nr " << (i + 1) << ": ";
        cout << *pt << endl;
        ++i;
    }
}

// mnoży każdy element ar[] przez r
void revalue(double r, double  * begin, double * end)
{
    double * pt;
    for (pt = begin; pt != end; pt++)
        (*pt) *= r;
}