#pragma once
#include "Nokta.h"
#include <string>


class DogruParcasi {
private:
   
    Nokta p1;
    Nokta p2;

public:
    
    DogruParcasi(Nokta p1, Nokta p2);
    DogruParcasi(const DogruParcasi& dp);

    // Bir Nokta nesnesi (do�ru par�as�n�n orta noktas� olarak), par�an�n uzunlu�u (double) ve e�imi
    // (double) de�erlerini alarak, do�ru par�as�n�n 2 u� noktas�n�n x ve y koordinatlar�n� hesaplayan
    // yap�c�
    DogruParcasi(Nokta orta, double uzunluk, double egim);

    Nokta getP1() const;
    Nokta getP2() const;

    void setP1(Nokta p1);
    void setP2(Nokta p2);

    double uzunluk() const;

    // Bir Nokta nesnesini parametre olarak al�r, bu noktadan do�ru par�as�na dik
    // olarak �izilecek do�ru par�as�n�n kesi�me noktas�n� hesaplar ve bir Nokta nesnesi olarak d�nd�ren metot
    Nokta kesisimNoktasi(Nokta p) const;
    Nokta ortaNokta() const;
    std::string toString() const;

    void yazdir() const;
};
