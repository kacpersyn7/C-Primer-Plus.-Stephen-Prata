// randwalk.cpp -- test klasy Vector
// kompilować z plikiem vect.cpp
#include <iostream>
#include <fstream>
#include <cstdlib>    // prototypy funkcji rand() i srand()
#include <ctime>      // prototyp funkcji time()
#include "vect.h"

int main()
{
    using namespace std;
    using VECTOR::Vector;
    srand(time(0));   // inicjalizacja generatora liczb pseudolosowych
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;
    ofstream data;
    data.open("dane.txt");
    cout << "Podaj dystans do przejścia (k, aby zakończyć): ";
    while (cin >> target)
    {

        cout << "Podaj długość kroku: ";
        if (!(cin >> dstep))
            break;
        data << "Dystans do przejścia: " << target << ", długość kroku: " << dstep << "\n";
        while (result.magval() < target)
        {
            data << steps << ": " << result << "\n";
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            steps++;
        }
        data << "Po " << steps << " krokach delikwent "
            "osiągnął położenie:\n";
        data << result << endl;
        result.polar_mode();
        data << " czyli\n" << result << endl;
        data << "Średnia długość kroku pozornego = "
            << result.magval()/steps << endl;
        steps = 0;
        result.reset(0.0, 0.0);
        cout << "Podaj dystans do przejścia (k, aby zakończyć): ";
    }
    cout << "Koniec!\n";
    cin.clear();
    while (cin.get() != '\n')
        continue;
    data.close();
    return 0;
}


