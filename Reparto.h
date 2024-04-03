//
// Created by CMHH on 3/31/2024.
//

#ifndef UNTITLED_REPARTO_H
#define UNTITLED_REPARTO_H

#include <iostream>
#include <string>
#include <vector>
#include "Casa.h"


class Reparto {

private:
    vector<Casa *> casas;
public:
    Reparto();

    void registrarCasa(Casa *casa);

    void eliminarCasa(int numero);

    void mostrarTodasCasas() const;

    void modificarTiempo(int numeroCasa, int nuevoMonto);

    void operator+=(Casa *casa);
};

#endif //UNTITLED_REPARTO_H
