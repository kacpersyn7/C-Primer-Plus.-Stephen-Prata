// lotto.cpp -- prawdopodobieństwo wygranej
#include <iostream>
// Uwaga: w niektórych implementacjach C++ trzeba użyć typu double
//        zamiast long double.
long double probability(unsigned numbers, unsigned picks, unsigned super);
int main()
{
    using namespace std;
    double total, choices, powerball;
    cout << "Podaj największą liczbę, jaką można wybrać,\n"
            "liczbę skreśleń, oraz\n"
            "przedzial superliczby\n";
    while ((cin >> total >> choices >> powerball) && choices <= total)
    {
        cout << "Szansa wygranej to jeden do ";
        cout << probability(total, choices,powerball);      // wyliczenie wyniku
        cout << ".\n";
        cout << "Następne trzy liczby (q, aby zakończyć): \n";
    }
    cout << "do widzenia\n";
    return 0;
}

// Poniższa funkcja wylicza prawdopodobieństwo trafnego wybrania picks 
// liczb spośród numbers możliwych.
long double probability(unsigned numbers, unsigned picks, unsigned super)
{
    long double result = 1.0;  // kilka zmiennych lokalnych
    long double n;
    unsigned p;

    for (n = numbers, p = picks; p > 0; n--, p--)
        result = result * n / p ; 
    result = result / super;
    return result;
}
