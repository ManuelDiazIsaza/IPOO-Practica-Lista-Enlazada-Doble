/*
  Archivo: ListaEnlazadaDoble.h
  Autor: Luis Yovany Romo
  Email: luis.romo@correounivalle.edu.co
  Fecha creaciC3n: 2018-02-09
  Fecha Cltima modificaciC3n: 2018-02-09
  VersiC3n: 0.1
  Licencia: GPL
*/

// Clase: ListaDoble
// Responsabilidad: elemento (nodo) de una lista Enlazada Doble
// ColaboraciCB3n: ninguna


#ifndef LISTADOBLE_H
#define LISTADOBLE_H
#include "Nodo.h"


using namespace std;


class ListaDoble
{
    private:
        Nodo *cab;
    public:
        ListaDoble();
        ~ListaDoble();
        void insertar(int pos, int x);
        void borrar(int pos);
        void imprimir();
        int cantidad();
        void insertaPrin(int info);
        void insertaFinal(int info);
        void borrarSegundo();
        void borrarUltimo();
        void borrarMayor();
};

#endif