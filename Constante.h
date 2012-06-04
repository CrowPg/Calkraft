//
//  Constante.h
//  Nombres
//
//  Created by Johan Medioni on 04/06/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef Nombres_Constante_h
#define Nombres_Constante_h
#include <exception>
#include <iostream>
#include <QString>

class Constante {
public:
    virtual QString afficher()=0;
    virtual int getVal()=0;
};

#endif
