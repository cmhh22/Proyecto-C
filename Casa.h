//
// Created by CMHH on 3/31/2024.
//

#ifndef UNTITLED_CASA_H
#define UNTITLED_CASA_H

#include <iostream>
#include <string>

using namespace std;

class Casa {
private:
    string nombrePropietario;
    int numeroCasa;
    int tiempoConsumido;

public:
    Casa(string nombre, int numero, int tiempoConsumido);

    string getNombrePropietario() const;

    int getNumeroCasa() const;

    int getTiempoConsumido() const;

    void setTiempoConsumido(int tiempoConsumido);

    virtual double importe();

    virtual void mostrarInfo() = 0;
};

//Herencia
class CasaTel : public Casa {
private:
    string numTelefono;
public:
    CasaTel(const string &nombre, int numero, int tiempoConsumido, const string &numTelefono);


    double importe();

    void mostrarInfo();
};

//Herencia
class CasaNautaH : public Casa {
private:
    string usuario;
public:
    CasaNautaH(const string &nombre, int numero, int tiempoConsumido, const string &usuario);

    const string &getUsuario() const;


    double importe();

    void mostrarInfo();
};


#endif //UNTITLED_CASA_H
