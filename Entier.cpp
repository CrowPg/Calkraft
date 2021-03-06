#include "Entier.h"

Entier& Entier::operator+=(Entier const &n){
    val+=n.val;
    return *this;
}

Entier& Entier::operator-(){
    val=-val;
    return *this;
}

Entier& Entier::operator-=(Entier const &n){
    val-=n.val;
    return *this;
}

Entier& Entier::operator*=(Entier const &n){
    val*=n.val;
    return *this;
}

Entier& Entier::operator/=(Entier const &n){
    val/=n.val;
    return *this;
}

Entier operator +(Entier const &n1, Entier const &n2){
    Entier n(n1);
    n+=n2;
    return n;
}

Entier operator -(Entier const &n1, Entier const &n2){
    Entier n(n1);
    n-=n2;
    return n;
}

Entier operator *(Entier const &n1, Entier const &n2){
    Entier n(n1);
    n*=n2;
    return n;
}

Rationnel operator /(Entier const &n1, Entier const &n2){
    Rationnel n(n1.getVal(),n2.getVal());
    return n;
}
