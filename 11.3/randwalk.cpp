// randwalk.cpp -- test klasy Vector
// kompilować z plikiem vect.cpp
#include <iostream>
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
    int N;
    double target;
    double dstep;
    int i;
    double srednia = 0;
    int min;
    int max = 0;
    cout<< "Podaj liczbe prob: ";
    cin>>N;
    cout << "Podaj długość kroku: ";
    cin >> dstep;
    cout << "Podaj dystans do przejścia (k, aby zakończyć): ";  
    cin >> target;
    for(i = 0; i < N; ++i)
    {

        while (result.magval() < target)
        {
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            steps++;
        }
        srednia += steps;
        if(!i || steps < min)
            min = steps;
        if(max < steps)
            max = steps;
        steps = 0;
        result.reset(0.0, 0.0);
        
    }
    srednia /= i;
    cout<<"\nmax: "<<max<<" min: "<<min<<" srednia: "<<srednia<<"\n";
    cout << "Koniec!\n";
    cin.clear();
    while (cin.get() != '\n')
        continue;
    return 0;
}

