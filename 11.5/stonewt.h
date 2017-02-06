// stonewt.h -- definicja klasy Stonewt
#ifndef STONEWT_H_
#define STONEWT_H_

class Stonewt
{
    public:
        enum MODE {STON, POU};
    private:
        enum {Lbs_per_stn = 14}; // liczba funtów na kamień
        MODE mode;
        int stone;               // masa w całych kamieniach
        double pds_left;         // reszta w funtach
        double pounds;   
        
    public:
        void setston() {mode = STON;}        // masa w funtach
        void setpou() {mode = POU;} 
        Stonewt(double lbs);          // konstruktor dla funtów
        Stonewt(int stn, double lbs); // konstruktor dla kamieni i funtów
        Stonewt();                    // konstruktor domyślny
        ~Stonewt();
        Stonewt operator+(const Stonewt & thing) const;
        Stonewt operator-(const Stonewt & thing) const;
        Stonewt operator*(const Stonewt & thing) const;
        friend std::ostream & operator<<(std::ostream & os, const Stonewt & thing);

};
#endif

