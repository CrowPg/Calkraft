//
//  Reel.h
//  Nombres
//
//  Created by Johan Medioni on 04/06/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

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

    QString afficher(){
        return QString("reel");
    }};

#endif
