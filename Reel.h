#ifndef Nombres_Reel_h
#define Nombres_Reel_h

#include "Constante.h"
#include "Complexe.h"

class Reel : public Constante{
    double val;

public:
    Reel(double v):val(v){}

    int getVal(){
        return 0;
    }

    operator Complexe(){
        return Complexe(val, 0);
    }

    QString afficher();

    Reel operator +=(Reel const &r);
    Reel operator -();
    Reel operator -=(Reel const &r);
    Reel operator *=(Reel const &r);
    Reel operator /=(Reel const &r);
};

#endif
