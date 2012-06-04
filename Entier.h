#ifndef Nombres_Header_h
#define Nombres_Header_h

#include "Constante.h"
#include "Reel.h"
#include "Rationnel.h"

class Entier : public Constante{
    int val;

public:
    Entier(int v):val(v){}

    QString afficher(){
        return QString::number(val);
    }

    int getVal(){
        return val;
    }

    operator Reel(){
        return Reel((double) val);
    }

    operator Rationnel(){
        return Rationnel(val, 1);
    }

    operator Complexe(){
        return Complexe((double)val, 0);
    }
};

#endif
