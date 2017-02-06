// vect.h -- klasa Vector z operatorem << i przełącznikiem trybu
#ifndef VECTOR_H_
#define VECTOR_H_
#include <iostream>
namespace VECTOR
{
    class Vector
    {
        public:
            enum Mode {RECT, POL};
            // RECT to współrzędne kartezjańskie, POL to współrzędne biegunowe
        private:
            double x;        // wartość składowej poziomej
            double y;        // wartość składowej pionowej
          //  double mag;      // długość wektora
          //  double ang;      // kierunek wektora (w stopniach)
            Mode mode;       // RECT lub POL
            // prywatne metody ustawiające składowe
            double set_mag() const;
            double set_ang() const;
            void set_x(double mag, double ang);
            void set_y(double mag, double ang);
        public:
            Vector();
            Vector(double n1, double n2, Mode form = RECT);
            void reset(double n1, double n2, Mode form = RECT);
            ~Vector();
            double xval() const {return x;}      // zwraca wartość składowej x
            double yval() const {return y;}      // zwraca wartość składowej y
            double magval() const; //{return set_mag();}  // zwraca długość
            double angval() const; //{return set_ang();}  // zwraca kąt
            void polar_mode();    // ustawia tryb na biegunowy (POL)
            void rect_mode();     // ustawia tryb na kartezjański (RECT)
            // metody przeciążające operatory
            Vector operator+(const Vector & b) const;
            Vector operator-(const Vector & b) const;
            Vector operator-() const;
            Vector operator*(double n) const;
            // funkcje zaprzyjaźnione
            friend Vector operator*(double n, const Vector & a);
            friend std::ostream &
                operator<<(std::ostream & os, const Vector & v);
    };
} // koniec przestrzeni nazw VECTOR
#endif

