#include <iostream>
#include "Rationnel.h"

QString Rationnel::afficher(){
    QString r = QString::number(num, 'g', 6);
    QString i = QString::number(den, 'g', 6);
    return r.append("/").append(i);
}

