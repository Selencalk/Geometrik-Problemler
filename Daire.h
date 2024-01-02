#pragma once
#include "Nokta.h"
#include <string>

class Daire {
private:
   
    Nokta merkez;
    double yaricap;

public:
    
    Daire(Nokta merkez, double yaricap);

   
    Daire(const Daire& d);

    // Ba�ka bir Daire nesnesi ve reel bir pozitif x de�eri alarak, parametre olarak al�nan Daire
    // nesnesini yar��ap� x ile �arp�lm�� olarak kopyalayan yap�c�
    Daire(const Daire& d, double x);

    Nokta getMerkez() const;

    double getYaricap() const;

    void setMerkez(Nokta merkez);
    void setYaricap(double yaricap);

    double alan() const;
    double cevre() const;

    // Bir Daire nesnesi al�r. Parametre olarak gelen daire metodu �a��ran dairenin i�inde ise
    // 0, daireler birebir �rt���yorsa 1, hi� kesi�im yoksa 2 d�nd�ren metot
    int kesisim(Daire d) const;

    std::string toString() const;
    void yazdir() const;
};
