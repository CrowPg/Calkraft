//
//  Complexe.h
//  Nombres
//
//  Created by Johan Medioni on 04/06/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef Nombres_Complexe_h
#define Nombres_Complexe_h
#include "Constante.h"

class Complexe : public Constante{
    double re;
    double im;

public:
    Complexe(double r, double i) : re(r), im(i) {}

    double getRe(){
        return re;
    }

    double getIm(){
        return im;
    }

    int getVal(){
        return 5;
    }

    QString afficher(){
        return "complexe";
    }
};

#endif