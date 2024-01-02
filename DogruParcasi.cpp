#include "DogruParcasi.h"
#include <cmath>
#include <iostream>

DogruParcasi::DogruParcasi(Nokta p1, Nokta p2) {
    this->p1 = p1;
    this->p2 = p2;
}

DogruParcasi::DogruParcasi(const DogruParcasi& dp) {
    this->p1 = dp.p1;
    this->p2 = dp.p2;
}

// Bir Nokta nesnesi (do�ru par�as�n�n orta noktas� olarak), par�an�n uzunlu�u (double) ve e�imi
// (double) de�erlerini alarak, do�ru par�as�n�n 2 u� noktas�n�n x ve y koordinatlar�n� hesaplayan
// yap�c�
DogruParcasi::DogruParcasi(Nokta orta, double uzunluk, double egim) {
   
    double yariUzunluk = uzunluk / 2;
    double aci = atan(egim);
    double ortaX = orta.getX();
    double ortaY = orta.getY();

    double p1X = ortaX - yariUzunluk * cos(aci);
    double p1Y = ortaY - yariUzunluk * sin(aci);
    double p2X = ortaX + yariUzunluk * cos(aci);
    double p2Y = ortaY + yariUzunluk * sin(aci);


    Nokta p1(p1X, p1Y);
    Nokta p2(p2X, p2Y);

    this->p1 = p1;
    this->p2 = p2;
}

Nokta DogruParcasi::getP1() const {
    return this->p1;
}

Nokta DogruParcasi::getP2() const {
    return this->p2;
}


void DogruParcasi::setP1(Nokta p1) {
    this->p1 = p1;
}

void DogruParcasi::setP2(Nokta p2) {
    this->p2 = p2;
}


double DogruParcasi::uzunluk() const {
  
    double p1X = this->p1.getX();
    double p1Y = this->p1.getY();
    double p2X = this->p2.getX();
    double p2Y = this->p2.getY(); 
    double mesafe = sqrt(pow(p2X - p1X, 2) + pow(p2Y - p1Y, 2));

    return mesafe;
}

// Bir Nokta nesnesini parametre olarak al�r, bu noktadan do�ru par�as�na dik
// olarak �izilecek do�ru par�as�n�n kesi�me noktas�n� hesaplar ve bir Nokta nesnesi olarak d�nd�ren metot
Nokta DogruParcasi::kesisimNoktasi(Nokta p) const {
   
    double p1X = this->p1.getX();
    double p1Y = this->p1.getY();
    double p2X = this->p2.getX();
    double p2Y = this->p2.getY();


    double pX = p.getX();
    double pY = p.getY();
    double egim = (p2Y - p1Y) / (p2X - p1X);
    double yKesim = p1Y - egim * p1X;
    double dikEgim = -1 / egim;
    double dikYKesim = pY - dikEgim * pX;  
    double kX = (dikYKesim - yKesim) / (egim - dikEgim);
    double kY = egim * kX + yKesim;

    Nokta k(kX, kY);
    return k;
}

Nokta DogruParcasi::ortaNokta() const {
   
    double p1X = this->p1.getX();
    double p1Y = this->p1.getY();
    double p2X = this->p2.getX();
    double p2Y = this->p2.getY();
    double ortaX = (p1X + p2X) / 2;
    double ortaY = (p1Y + p2Y) / 2;
  
    Nokta orta(ortaX, ortaY);

    return orta;
}

// Ge�erli DogruParcasi nesnesinin String olarak d�nd�ren metot
// Nesne s�n�f�n�n toString y�ntemini kullan�r
std::string DogruParcasi::toString() const {

    std::string p1Str = this->p1.toString();
    std::string p2Str = this->p2.toString();

    std::string dpStr = "[" + p1Str + ", " + p2Str + "]";

    return dpStr;
}

void DogruParcasi::yazdir() const {
    
    std::string dpStr = this->toString();
    std::cout << dpStr << std::endl;
}
