//
// Created by CMHH on 3/31/2024.
//
#include "Reparto.h"

Reparto::Reparto() {}

//1 Metodo para registrar una Casa
void Reparto::registrarCasa(Casa *casa) {
    casas.push_back(casa);
    cout << "Casa registrada.\n";
}

//Sobrecarga operador
void Reparto::operator+=(Casa *casa) {
    registrarCasa(casa);
}


//2 Metodo para eliminar una Casa
void Reparto::eliminarCasa(int numero) {
    for (int it = 0; it < casas.size(); it++) {
        if (casas[it]->getNumeroCasa() == numero) {
            casas.erase(casas.begin() + it);
            cout << "Casa eliminada.\n";
            return;
        }
    }
    cout << "No se encontro ninguna casa con el numero " << numero << ".\n";
}


//3 Metodo para modificar el time a consumir de una casa
void Reparto::modificarTiempo(int numeroCasa, int nuevoTiempo) {
    for (int it = 0; it < casas.size(); it++) {
        if (casas[it]->getNumeroCasa() == numeroCasa) {
            casas[it]->setTiempoConsumido(nuevoTiempo);
            cout << "Se cambio el tiempo a consumir.\n";
        }
    }
}

//4 Metodo para mostrar todas las casas con su respectiva informacion
void Reparto::mostrarTodasCasas() const {
    cout << "Casas registradas en el reparto:\n";
    for (Casa *casa: casas) {
        casa->mostrarInfo();
        if (casa->importe() != 0) {
            cout << "   Importe: " << casa->importe() << endl;
        } else {
            cout << "   Importe: 0.0" << endl;
        }
    }
}


