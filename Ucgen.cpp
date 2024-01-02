#include "Ucgen.h"
#include "DogruParcasi.h"
#include <cmath>
#include <iostream>

Ucgen::Ucgen(Nokta a, Nokta b, Nokta c) {
    this->x = a;
    this->y = b;
    this->z = c;
}

Nokta Ucgen::getA() const {
    return this->x;
}
Nokta Ucgen::getB() const {
    return this->y;
}

Nokta Ucgen::getC() const {
    return this->z;
}

void Ucgen::setA(Nokta a) {
    this->x = a;
}

void Ucgen::setB(Nokta b) {
    this->y = b;
}


void Ucgen::setC(Nokta c) {
    this->z = c;
}

std::string Ucgen::toString() const {
   
    std::string aStr = this->x.toString();
    std::string bStr = this->y.toString();
    std::string cStr = this->z.toString();

    std::string ucgenStr = "Üçgen; onun noktalarý: " + aStr + ", " + bStr + ", " + cStr;
    return ucgenStr;
}

double Ucgen::alan() const {
    
    double aX = this->x.getX();
    double aY = this->x.getY();
    double bX = this->y.getX();
    double bY = this->y.getY();
    double cX = this->z.getX();
    double cY = this->z.getY();

    double alan = abs((aX * (bY - cY) + bX * (cY - aY) + cX * (aY - bY)) / 2);
    return alan;
}
double Ucgen::cevre() const {
    
    DogruParcasi ab(this->x, this->y);
    DogruParcasi bc(this->y, this->z);
    DogruParcasi ca(this->z, this->x);

    double abUzunluk = ab.uzunluk();
    double bcUzunluk = bc.uzunluk();
    double caUzunluk = ca.uzunluk();
    double cevre = abUzunluk + bcUzunluk + caUzunluk;

    return cevre;
}

double* Ucgen::acilar() const {
    double aX = this->x.getX();
    double aY = this->x.getY();
    double bX = this->y.getX();
    double bY = this->y.getY();
    double cX = this->z.getX();
    double cY = this->z.getY();

   
    DogruParcasi ab(this->x, this->y);
    DogruParcasi bc(this->y, this->z);
    DogruParcasi ca(this->z, this->x);

    double abUzunluk = ab.uzunluk();
    double bcUzunluk = bc.uzunluk();
    double caUzunluk = ca.uzunluk();

    double A = acos((pow(bcUzunluk, 2) + pow(caUzunluk, 2) - pow(abUzunluk, 2)) / (2 * bcUzunluk * caUzunluk));
    double B = acos((pow(caUzunluk, 2) + pow(abUzunluk, 2) - pow(bcUzunluk, 2)) / (2 * caUzunluk * abUzunluk));
    double C = acos((pow(abUzunluk, 2) + pow(bcUzunluk, 2) - pow(caUzunluk, 2)) / (2 * abUzunluk * bcUzunluk));

    double* acilar = new double[3];
    acilar[0] = A * 180.0 / 3.14159;
    acilar[1] = B * 180.0 / 3.14159;
    acilar[2] = C * 180.0 / 3.14159;

    return acilar;
}

void Ucgen::yazdir() const {
    
    std::string ucgenStr = this->toString();
    std::cout << ucgenStr << std::endl;
}
