#pragma once
#include <string>

class Nokta {
private:
    
    double x;
    double y;

public:
    Nokta();
    Nokta(double deger);
    Nokta(double x, double y);
    Nokta(const Nokta& n);

    // Baþka bir nokta (Nokta nesnesi) ve iki double deðiþken (ofset_x ve ofset_y) alarak yeni bir
    // nokta (Nokta nesnesi) üretir ve ofset deðiþkenlerini ilk giriþ parametresi olarak alýnan orijinal
    Nokta(const Nokta& n, double ofset_x, double ofset_y);

  
    double getX() const;
    double getY() const;  

    void setX(double x);
    void setY(double y);
    void setXY(double x, double y);

    std::string toString() const;
    void yazdir() const;
};
