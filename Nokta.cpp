#include "Nokta.h"
#include <iostream>

Nokta::Nokta() {
    setX(0.0);
    setY(0.0);
}


Nokta::Nokta(double deger) {
    setX(deger);
    setY(deger);
}


Nokta::Nokta(double x, double y) {
    setX(x);
    setY(y);
}

Nokta::Nokta(const Nokta& n) {
    setX(n.getX());
    setY(n.getY());
}

// Ba�ka bir nokta (Nokta nesnesi) ve iki double de�i�ken (ofset_x ve ofset_y) alarak yeni bir
// nokta (Nokta nesnesi) �retir ve ofset de�i�kenlerini ilk giri� parametresi olarak al�nan orijinal
// noktan�n x ve y koordinatlar�na ekler
Nokta::Nokta(const Nokta& n, double ofset_x, double ofset_y) {
    setX(n.getX() + ofset_x);
    setY(n.getY() + ofset_y);
}


double Nokta::getX() const {
    return this->x;
}


double Nokta::getY() const {
    return this->y;
}

void Nokta::setX(double x) {
    this->x = x;
}


void Nokta::setY(double y) {
    this->y = y;
}


void Nokta::setXY(double x, double y) {
    setX(x);
    setY(y);
}

std::string Nokta::toString() const {
 
    std::string xStr = std::to_string(this->x);
    std::string yStr = std::to_string(this->y);

    // x ve y koordinatlar�n� birle�tirerek bir String olu�tur
    std::string noktaStr = "(" + xStr + ", " + yStr + ")";

   
    return noktaStr;
}

void Nokta::yazdir() const {
    
    std::string noktaStr = this->toString();

    std::cout << noktaStr << std::endl;
}
