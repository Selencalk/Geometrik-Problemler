#pragma once
#include "Nokta.h"
#include <string>

class Ucgen {
private:
    Nokta x;
    Nokta y;
    Nokta z;

public:
   
    Ucgen(Nokta a, Nokta b, Nokta c);

    Nokta getA() const;

    Nokta getB() const;
    Nokta getC() const;

    void setA(Nokta a);
    void setB(Nokta b);
    void setC(Nokta c); 

    std::string toString() const;

    double alan() const;
    double cevre() const;
    double* acilar() const;

    void yazdir()const;
};