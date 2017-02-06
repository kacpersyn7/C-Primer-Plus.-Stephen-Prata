// stonewt.h -- definicja klasy Stonewt
#ifndef STONEWT_H_
#define STONEWT_H_

class Stonewt
{
    public:
        enum MODE {STON, POU};
    private:
        enum {Lbs_per_stn = 14}; // liczba funtów na kamień
        int stone; 
        MODE mode;              // masa w całych kamieniach
        double pds_left;         // reszta w funtach
        double pounds;           // masa w funtach
    public:
        Stonewt(double lbs);          // konstruktor dla funtów
        Stonewt(int stn, double lbs); // konstruktor dla kamieni i funtów
        Stonewt();                    // konstruktor domyślny
        ~Stonewt();
        void change(double lbs);
        void setston() {mode = STON;}       
        void setpou() {mode = POU;}
        bool operator<(const Stonewt & s) const {return (pounds<s.pounds);}
        bool operator>(const Stonewt & s) const {return (pounds>s.pounds);}
        bool operator<=(const Stonewt & s) const {return (pounds<=s.pounds);}
        bool operator>=(const Stonewt & s) const {return (pounds>=s.pounds);}
        bool operator==(const Stonewt & s) const {return (pounds==s.pounds);}
        bool operator!=(const Stonewt & s) const {return (pounds!=s.pounds);}

        friend std::ostream & operator<<(std::ostream & os, const Stonewt & thing);
        friend std::istream & operator>>(std::istream & os, Stonewt & s);
};
#endif

