#include "Pile.h"
#include "Entier.h"



void Pile::parsage(QString s) {
    QStringList list = s.split(" ");
    foreach (const QString &val, list) {
        if(val != "+" && val != "-" && val != "*" && val != "/" && val != " ") {
            if(val.contains('.')) {
                std::cout << "\n"<< val.toStdString() << " C'est un reel";
                push(new Reel(val.toDouble()));
            }
            else if(val.contains('$')) {
                std::cout << "\n"<< val.toStdString() << " C'est un complexe";
                double a = val.mid(0, val.indexOf('$')).toDouble();
                std::cout << val.length() << " plouf "<< val.indexOf(('$'));
                double b = val.mid(val.indexOf(('$'))+1).toDouble();
                push(new Complexe(a, b));
            }
            else if(val.contains('/')) {
                std::cout << "\n"<< val.toStdString() << " C'est un rationnel";
            }
            else {
                std::cout << "\n"<< val.toStdString() << " C'est un entier";
                push(new Entier(val.toInt()));
            }
        }
        else {
            calcul(val);
        }
    }
}



void Pile::calcul(QString operateur) {
    if(!isEmpty()) {
        int val1 = pop()->getVal();
        if(!isEmpty()) {
            int val2 = pop()->getVal();
            int newval;
            if(operateur == "+")
                newval = val1 + val2;
            else if (operateur == "-")
                newval = val1 - val2;
            else if (operateur == "/")
                newval = val1 / val2;
            else if (operateur == "*")
                newval = val1 * val2;
            push(new Entier(newval));
        } else {
            push(new Entier(val1));
        }
    }
}

