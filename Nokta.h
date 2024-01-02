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

    // Ba�ka bir nokta (Nokta nesnesi) ve iki double de�i�ken (ofset_x ve ofset_y) alarak yeni bir
    // nokta (Nokta nesnesi) �retir ve ofset de�i�kenlerini ilk giri� parametresi olarak al�nan orijinal
    Nokta(const Nokta& n, double ofset_x, double ofset_y);

  
    double getX() const;
    double getY() const;  

    void setX(double x);
    void setY(double y);
    void setXY(double x, double y);

    std::string toString() const;
    void yazdir() const;
};
