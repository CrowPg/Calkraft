#include <iostream>
#include "Reel.h"

QString Reel::afficher(){
    return QString::number(val, 'g', 6);
}
