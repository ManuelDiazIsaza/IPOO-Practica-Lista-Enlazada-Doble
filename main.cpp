/*
  Archivo: Main.cpp
  Autor: Luis Yovany Romo Portilla
  Email: luis.romo@correounivalle.edu.co
  Fecha creaciC3n: 2017-08-31
  Fecha C:ltima modificaciC3n: 2017-08-31
  VersiC3n: 0.1
  Licencia: GPL
*/
#include <stdio.h>
#include <iostream>
#include "ListaEnlazadaDoble.h"
using namespace std;

int main()
{
    ListaDoble *ld = new ListaDoble();
/*    ld->insertar(1, 10);
    ld->insertar(2, 20);
    ld->insertar(3, 30);
    ld->insertar(2, 15);
    ld->insertar(1, 115);
    ld->imprimir();
    cout << "Borrar el primero"  << endl;
    ld->borrar(1);
    ld->imprimir();*/



//    delete ld;
//    ld = NULL;
//    ld->insertaPrin(40);
//    ld->insertaPrin(20);
//    ld->insertaPrin(10);
//    ld->insertaFinal(500);
//    ld->insertaFinal(300);
//    ld->insertaPrin(20);
//   ld->insertaFinal(400);
//    ld->insertaPrin(10);

    ld->insertaFinal(35);
    ld->insertaFinal(25);
    ld->insertaFinal(40);
    ld->insertaFinal(5);
//    ld->borrarSegundo();
//    ld->borrarUltimo();
    ld->borrarMayor();
    ld->imprimir();
 //   ld->borrarMayor();
//    ld->imprimir();
    return 0;
}
