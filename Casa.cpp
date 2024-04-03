//
// Created by CMHH on 3/31/2024.
//
#include "Casa.h"


Casa::Casa(string nombre, int numero, int tiempoConsumido) : nombrePropietario(nombre), numeroCasa(numero),
                                                             tiempoConsumido(tiempoConsumido) {
}

string Casa::getNombrePropietario() const {
    return nombrePropietario;
}

int Casa::getNumeroCasa() const {
    return numeroCasa;
}

int Casa::getTiempoConsumido() const {
    return tiempoConsumido;
}


double Casa::importe() {
    return 0;
}

void Casa::setTiempoConsumido(int tiempoConsumido) {
    Casa::tiempoConsumido = tiempoConsumido;
}


CasaTel::CasaTel(const string &nombre, int numero, int tiempoConsumido, const string &numTelefono) : Casa(nombre,
                                                                                                          numero,
                                                                                                          tiempoConsumido),
                                                                                                     numTelefono(
                                                                                                             numTelefono) {}


double CasaTel::importe() {
    return getTiempoConsumido() * 100;
}

void CasaTel::mostrarInfo() {
    cout << "Tipo Telefono-Fijo >> Nombre del propietario: " << getNombrePropietario() << "   Numero de casa: "
         << getNumeroCasa();
}


CasaNautaH::CasaNautaH(const string &nombre, int numero, int tiempoConsumido, const string &usuario) : Casa(nombre,
                                                                                                            numero,
                                                                                                            tiempoConsumido),
                                                                                                       usuario(usuario) {}

const string &CasaNautaH::getUsuario() const {
    return usuario;
}

double CasaNautaH::importe() {
    double aux = 0;
    if (getTiempoConsumido() > 0 && getTiempoConsumido() <= 30)
        aux = 500;
    else if (getTiempoConsumido() > 30 && getTiempoConsumido() <= 45)
        aux = 750;
    else
        aux = 1000;
    return aux;
}

void CasaNautaH::mostrarInfo() {
    cout << "Tipo Nauta-Hogar >> Nombre del propietario: " << getNombrePropietario() << "   Numero de casa: "
         << getNumeroCasa();
}



