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

    // Baþka bir Daire nesnesi ve reel bir pozitif x deðeri alarak, parametre olarak alýnan Daire
    // nesnesini yarýçapý x ile çarpýlmýþ olarak kopyalayan yapýcý
    Daire(const Daire& d, double x);

    Nokta getMerkez() const;

    double getYaricap() const;

    void setMerkez(Nokta merkez);
    void setYaricap(double yaricap);

    double alan() const;
    double cevre() const;

    // Bir Daire nesnesi alýr. Parametre olarak gelen daire metodu çaðýran dairenin içinde ise
    // 0, daireler birebir örtüþüyorsa 1, hiç kesiþim yoksa 2 döndüren metot
    int kesisim(Daire d) const;

    std::string toString() const;
    void yazdir() const;
};
