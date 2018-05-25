/*
  Archivo: ListaEnlazadaDoble.cpp
  Autor: Luis Yovany Romo Portilla
  Email: luis.romo@correounivalle.edu.co
  Fecha creaciC3n: 2017-08-31
  Fecha C:ltima modificaciC3n: 2017-08-31
  VersiC3n: 0.1
  Licencia: GPL
*/

#include "ListaEnlazadaDoble.h"
#include "Nodo.h"
#include <time.h>
#include <stdio.h>
#include <iostream>

ListaDoble::ListaDoble()
{
    cab = NULL;
}



void ListaDoble::insertar(int pos, int info)
{
    if (pos <= cantidad() + 1)
    {
        Nodo *nuevo = new Nodo();
        nuevo->setInfo(info);
        if (pos == 1)
        {
            nuevo->setSig(cab);
            if (cab != NULL)
                cab->setAnt(nuevo);
            cab = nuevo;
        }
        else
        if (pos == cantidad() + 1)
        {
            Nodo *desplaza = cab;
            while (desplaza->getSig() != NULL)
            {
                desplaza = desplaza->getSig();
            }
            desplaza->setSig(nuevo);
            nuevo->setAnt(desplaza);
            nuevo->setSig(NULL);
        }
        else
        {
            Nodo *desplaza = cab;
            for (int f = 1; f <= pos - 2; f++)
                desplaza = desplaza->getSig();
            Nodo *siguiente = desplaza->getSig();
            desplaza->setSig(nuevo);
            nuevo->setAnt(desplaza);
            nuevo->setSig(siguiente);
            siguiente->setAnt(nuevo);
        }
    }
}


int ListaDoble::cantidad()
{
    Nodo *desplaza = cab;
    int cant = 0;
    while (desplaza != NULL)
    {
        cant++;
        desplaza = desplaza->getSig();
    }
    return cant;
}



void ListaDoble::borrar(int pos)
{
    if (pos <= cantidad())
    {
        Nodo *borrar;
        if (pos == 1)
        {
            borrar = cab;
            cab = cab->getSig();
            if (cab != NULL)
                cab->setAnt(NULL);
        }
        else
        {
            Nodo *desplaza;
            desplaza = cab;
            for (int f = 1; f <= pos - 2; f++)
                desplaza = desplaza->getSig();
            Nodo *proximo = desplaza->getSig();
            borrar = proximo;
            desplaza->setSig(proximo->getSig());
            Nodo *siguiente = proximo->getSig();
            if (siguiente != NULL)
                siguiente->setAnt(desplaza);
        }
        delete borrar;
        borrar = NULL;
    }
}


void ListaDoble::imprimir()
{
    Nodo *desplaza = cab;
    cout << "Listado completo." << endl;
    while (desplaza != NULL)
    {
        cout << desplaza->getInfo() << "-";
        desplaza = desplaza->getSig();
    }
    cout << endl;
}

ListaDoble::~ListaDoble()
{
    Nodo *desplaza = cab;
    Nodo *borrar;
    while (desplaza != NULL)
    {
        borrar = desplaza;
        desplaza = desplaza->getSig();
        delete borrar;
        borrar = NULL;
    }
}

void ListaDoble::insertaPrin(int info)
{
    if(cab==nullptr)
    {
        Nodo *nuevo = new Nodo();
        nuevo->setInfo(info);
        cab = nuevo;
    }
    else
    {
        Nodo *nuevo = new Nodo();
        nuevo->setInfo(info);
        cab->setAnt(nuevo);
        nuevo->setSig(cab);
        cab = nuevo;
        nuevo->setAnt(nullptr);
    }
}

void ListaDoble::insertaFinal(int info)
{
    Nodo *nuevo = new Nodo();
    nuevo->setInfo(info);
    Nodo *desplaza = cab;
    if(cab==nullptr)
    {
        cab = nuevo;
    }
    else
    {
        while(desplaza!= nullptr)
        {
            if(desplaza->getSig()== nullptr)
            {
                desplaza->setSig(nuevo);
                nuevo->setAnt(desplaza);
                desplaza= nullptr;
            }
            else
            {
                desplaza=desplaza->getSig();
            }
        }
    }
}

void ListaDoble::borrarSegundo()
{
    if(cantidad()<2)
    {
        cout << "No hay suficientes elementos." << endl;
    }
    else if(cantidad()==2)
    {
        Nodo *borrar = cab->getSig();
        cab->setSig(nullptr);
        delete borrar;
    }
    else
    {
        Nodo *borrar = cab->getSig();
        cab->setSig(borrar->getSig());
        borrar->getSig()->setAnt(cab);
        delete borrar;
    }
}


void ListaDoble::borrarUltimo()
{
    Nodo *borrar = cab;
    if(cab == nullptr)
    {
        cout << "No hay suficientes elementos." << endl;
    }
    else if(cantidad()==1)
    {
        delete borrar;
        cab = nullptr;
    }
    else
    {
        for(int i=0;borrar->getSig()!= nullptr;i++)
        {
            borrar = borrar->getSig();
        }
        borrar->getAnt()->setSig(nullptr);
        delete borrar;
    }
}

void ListaDoble::borrarMayor()
{
    Nodo *borrar;
    Nodo *desplaza = cab;

    if(cab == nullptr)
    {
        cout << "No hay suficientes elementos." << endl;
    }
    else if(cantidad()==1)
    {
        delete desplaza;
        cab = nullptr;
    }
    else
    {
        int mayorTemp=0;
        int pos=0;
        for(int i=0;desplaza!= nullptr;i++)
        {
            if(mayorTemp<desplaza->getInfo())
            {
                mayorTemp = desplaza->getInfo();
                borrar = desplaza;
                pos = i+1;
                desplaza = desplaza->getSig();
            }
            else
            {
                desplaza = desplaza->getSig();
            }
        }
        if(pos==1)
        {
            cab->getSig()->setAnt(nullptr);
            cab = borrar->getSig();
            delete borrar;
        }
        else if(pos==cantidad())
        {
            borrar->getAnt()->setSig(nullptr);
            delete borrar;
        }
        else
        {
        borrar->getAnt()->setSig(borrar->getSig());
        borrar->getSig()->setAnt(borrar->getAnt());
        }
    }
}