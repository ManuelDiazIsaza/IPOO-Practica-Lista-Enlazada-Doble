/*
  Archivo: Nodo.h
  Autor: Luis Yovany Romo
  Email: luis.romo@correounivalle.edu.co
  Fecha creaciC3n: 2018-02-09
  Fecha Cltima modificaciC3n: 2018-02-09
  VersiC3n: 0.1
  Licencia: GPL
*/

// Clase: Nodo
// Responsabilidad: elemento (nodo) de una lista
// ColaboraciCB3n: ninguna


#ifndef NODO_H
#define NODO_H


using namespace std;


class Nodo
{
protected:
    int info;
    Nodo *sig;
    Nodo *ant;
public:
    Nodo();
    ~Nodo();
    void setInfo(int info);
    int getInfo();
    Nodo *getSig();
    void setSig(Nodo *sig);
    Nodo *getAnt();
    void setAnt(Nodo *ant);
};

#endif