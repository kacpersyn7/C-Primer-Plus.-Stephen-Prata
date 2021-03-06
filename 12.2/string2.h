// string1.h -- poprawiona i uzupełniona implementacja klasy reprezentującej
// ciągi znaków
#ifndef STRING2_H_
#define STRING2_H_
#include <iostream>
using std::ostream;
using std::istream;

class String
{
    private:
        char * str;             // wskaźnik ciągu
        int len;                // długość ciągu
        static int num_strings; // liczba obiektów klasy
        static const int CINLIM = 80; // limit długości ciągu na wejściu
    public:
        // konstruktory i pozostałe metody klasy
        String(const char * s);   // konstruktor
        String();                 // konstruktor domyślny
        String(const String &);   // konstruktor kopiujący
        ~String();                // destruktor
        int length () const { return len; }
        void stringlow ();
        void stringup ();
        int has (const char & ch) const;
        // metody przeciążające operatory
        String & operator=(const String &);
        String & operator=(const char *);
        char & operator[](int i);
        const char & operator[](int i) const;
        String operator+(const String & st) const;
        String operator+(const char* s) const;
        // funkcje zaprzyjaźnione przeciążające operatory
        friend String operator+(const char* s, const String & st);
        friend bool operator<(const String &st, const String &st2);
        friend bool operator>(const String &st1, const String &st2);
        friend bool operator==(const String &st, const String &st2);
        friend ostream & operator<<(ostream & os, const String & st);
        friend istream & operator>>(istream & is, String & st);
        // metoda statyczna
        static int HowMany();
};
#endif

