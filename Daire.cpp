#include "Daire.h"
#include <cmath>
#include <iostream>

Daire::Daire(Nokta merkez, double yaricap) {
    this->merkez = merkez;
    this->yaricap = yaricap;
}

Daire::Daire(const Daire& d) {
    this->merkez = d.merkez;
    this->yaricap = d.yaricap;
}

Daire::Daire(const Daire& d, double x) {
    this->merkez = d.merkez;
    this->yaricap = d.yaricap * x;
}

Nokta Daire::getMerkez() const {
    return this->merkez;
}

double Daire::getYaricap() const {
    return this->yaricap;
}

void Daire::setMerkez(Nokta merkez) {
    this->merkez = merkez;
}


void Daire::setYaricap(double yaricap) {
    this->yaricap = yaricap;
}


double Daire::alan() const {
    
    const double PI = 3.14159;

    double alan = PI * pow(this->yaricap, 2);
    return alan;
}

double Daire::cevre() const {
   
    const double PI = 3.14159;
    double cevre = 2 * PI * this->yaricap;

    return cevre;
}

// Bir Daire nesnesi alýr. Parametre olarak gelen daire metodu çaðýran dairenin içinde ise
// 0, daireler birebir örtüþüyorsa 1, hiç kesiþim yoksa 2 döndüren metot
int Daire::kesisim(Daire d) const {
    
    double m1X = this->merkez.getX();
    double m1Y = this->merkez.getY();
    double m2X = d.merkez.getX();
    double m2Y = d.merkez.getY();

    double r1 = this->yaricap;
    double r2 = d.yaricap;
    double mesafe = sqrt(pow(m2X - m1X, 2) + pow(m2Y - m1Y, 2));

    int durum;
    if (mesafe == 0 && r1 == r2) {
        
        durum = 1;
    }
    else if (mesafe < abs(r1 - r2)) {
       
        durum = 0;
    }
    else if (mesafe > r1 + r2) {
        durum = 2;
    }
    else {
      
        durum = 3;
    }
    return durum;
}


std::string Daire::toString() const {
   
    std::string merkezStr = this->merkez.toString();
    std::string yaricapStr = std::to_string(this->yaricap);
    std::string daireStr = "Merkez: " + merkezStr + ", Yarýçap: " + yaricapStr;

    return daireStr;
}


void Daire::yazdir() const {
    
    std::string daireStr = this->toString();
    std::cout << daireStr << std::endl;
}
