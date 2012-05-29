#ifndef PILE_H
#define PILE_H
#include <QStack>
#include <QString>
#include <QStringList>
#include<iostream>

class Pile : public QStack<int>{
    public:
        void parsage(QString s);
        void calcul(QString s);
};

#endif
