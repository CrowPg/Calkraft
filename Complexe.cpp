#include "Complexe.h"

QString Complexe::afficher(){
    QString r = QString::number(re, 'g', 6);
    QString i = QString::number(im, 'g', 6);
    return r.append("$").append(i);
}
