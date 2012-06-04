//
//  Rationnel.h
//  Nombres
//
//  Created by Johan Medioni on 04/06/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef Nombres_Rationnel_h
#define Nombres_Rationnel_h

#include "Constante.h"
#include "Reel.h"
#include "Complexe.h"
#include "Erreur.h"

class Rationnel : public Constante{
    int num;
    int den;

public:
    Rationnel(int n, int d) {
        num=n;
        den=d;
    }

    int getNum(){
        return num;
    }
    int getDen(){
        return den;
    }

    int getVal(){
        return 0;
    }

    operator Reel(){
        return Reel(num/den);
    }
    operator Complexe(){
        return Complexe((double)num/(double)den, 0);
    }

    QString afficher(){
        return QString("rationel");
    }
};

#endif