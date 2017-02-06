#include <iostream>
const int MAX = 5;
int fill_array (double table [], int limit);
void show_array (const double table [], int n);
void reverse_array (double table [], int n);
int main()
{
    double tab[MAX];
    int size = fill_array(tab, MAX);
    show_array(tab, size);
    reverse_array(tab, size);
    show_array(tab, size);
}
int fill_array (double table [], int limit)
{
    using namespace std;
    double temp;
    int i;
    for (i = 0; i < limit; i++)
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
        table[i] = temp;
    }
    return i;
}
void show_array(const double table[], int n)
{
    for(int i = 0; i < n; ++i)
        std::cout<<table[i]<<std::endl;
}
void reverse_array (double table [], int n)
{
    double temp[MAX];
    for(int i = 0; i < n; ++i)
        temp[i] = table[n-1-i];
    for(int i = 0; i < n; ++i)
        table[i] = temp[i];
}