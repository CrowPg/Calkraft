#include "Pile.h"

void Pile::parsage(QString s) {
    QStringList list = s.split(" ");
    std::cout << "\nParsage... \n";
    foreach (const QString &val, list) {
        if(val != "+" && val != "-" && val != "*" && val != "/")
            push(val.toInt());
        else {
            calcul(val);
        }
    }
}


void Pile::calcul(QString operateur) {
    if(!isEmpty()) {
        int val1 = pop();
        if(!isEmpty()) {
            int val2 = pop();
            int newval;
            if(operateur == "+")
                newval = val1 + val2;
            else if (operateur == "-")
                newval = val1 - val2;
            else if (operateur == "/")
                newval = val1 / val2;
            else if (operateur == "*")
                newval = val1 * val2;
            push(newval);
        }
    }
}
