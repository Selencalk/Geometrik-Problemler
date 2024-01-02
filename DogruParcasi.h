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

    // Bir Nokta nesnesi (doðru parçasýnýn orta noktasý olarak), parçanýn uzunluðu (double) ve eðimi
    // (double) deðerlerini alarak, doðru parçasýnýn 2 uç noktasýnýn x ve y koordinatlarýný hesaplayan
    // yapýcý
    DogruParcasi(Nokta orta, double uzunluk, double egim);

    Nokta getP1() const;
    Nokta getP2() const;

    void setP1(Nokta p1);
    void setP2(Nokta p2);

    double uzunluk() const;

    // Bir Nokta nesnesini parametre olarak alýr, bu noktadan doðru parçasýna dik
    // olarak çizilecek doðru parçasýnýn kesiþme noktasýný hesaplar ve bir Nokta nesnesi olarak döndüren metot
    Nokta kesisimNoktasi(Nokta p) const;
    Nokta ortaNokta() const;
    std::string toString() const;

    void yazdir() const;
};
