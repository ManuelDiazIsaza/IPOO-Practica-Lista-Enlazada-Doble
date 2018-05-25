/*
  Archivo: Nodo.cpp
  Autor: Luis Yovany Romo Portilla
  Email: luis.romo@correounivalle.edu.co
  Fecha creaciC3n: 2017-08-31
  Fecha C:ltima modificaciC3n: 2017-08-31
  VersiC3n: 0.1
  Licencia: GPL
*/

#include <stdio.h>
#include <iostream>
#include "Nodo.h"

Nodo::Nodo()
{
    info = 0;
    sig = NULL;
    ant = NULL;
}

Nodo::~Nodo()
{
    //MC)todo destructor
}

void Nodo::setInfo(int info){
    this -> info = info;
}
int Nodo::getInfo(){
    return info;
}

void Nodo::setSig(Nodo *sig){
    this -> sig = sig;
}

Nodo* Nodo::getSig(){
    return this -> sig;
}

void Nodo::setAnt(Nodo *ant){
    this -> ant = ant;
}

Nodo* Nodo::getAnt(){
    return this -> ant;
}