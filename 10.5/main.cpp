#include <iostream>
#include <cctype>                // albo ctype.h
#include "stack.h"
int main()
{
    using namespace std;
    int sum = 0;
    Stack st;                    // tworzy pusty stos
    char ch;
    customer po;
    cout << "Naciśnij D, aby wprowadzić deklarację, \n"
        << "P, aby przetworzyć deklarację, lub K, aby zakończyć.\n";
    while (cin >> ch && toupper(ch) != 'K')
    {
        while (cin.get() != '\n')
            continue;
        if (!isalpha(ch))
        {
            cout << '\a';
            continue;
        }
        switch(ch)
        {
            case 'D':
            case 'd': cout << "Podaj nazwisko nowej deklaracji: ";
                      cin >> po.fullname;
                      cout << "Podaj kase nowej deklaracji: ";
                      cin >> po.payment;
                      if (st.isfull())
                          cout << "Stos pełen!\n";
                      else
                          st.push(po);
                      break;
            case 'P':
            case 'p': if (st.isempty())
                          cout << "Stos pusty!\n";
                      else {
                      	  
                          st.pop(po);
                          sum += po.payment;
                          cout << "Deklaracja o nazwisku " << po.fullname << " zdjęta\n";
                          cout << "Łączna suma " << sum << endl;
                      }
                      break;
        }
        cout << "Naciśnij D, aby wprowadzić deklarację, \n"
            << "P, aby przetworzyć deklarację, lub K, aby zakończyć.\n";
    }
    cout << "Fajrant!\n";
    return 0;
}