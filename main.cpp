#include <iostream>
#include <string>
#include "Reparto.h"

using namespace std;

int main() {
    Reparto reparto;
    CasaNautaH c1("Maria Elena Hdez", 1, 60, "maria@nauta.com.cu");
    CasaTel c2("Victor Manuel Hdez", 2, 25, "56658638");
    CasaTel c3("Carlos Manuel Hdez ", 3, 38, "52148289");
    CasaNautaH c4("Franklin Perez Perez", 4, 35, "franklin@nauta.com.cu");

    reparto += &c1;
    reparto += &c2;
    reparto += &c3;
    reparto += &c4;

    int opcion;
    do {
        cout << "\nBienvenido a tu app: Agente-Telefonico";
        cout << "\n--- Menu ---\n";
        cout << "1 - Registrar casa\n";
        cout << "2 - Eliminar casa\n";
        cout << "3 - Modificar tiempo de consumo de una casa\n";
        cout << "4 - Mostrar informacion de todas las casas\n";
        cout << "5 - Salir\n";
        cout << "Ingrese su opcion: ";
        cin >> opcion;

        switch (opcion) {

            case 1: {
                string nombrePropietario;
                int numeroCasa;
                cout << "Ingrese el nombre completo del propietario: ";
                cin.ignore();
                getline(cin, nombrePropietario);
                cout << "Ingrese el numero de la casa: ";
                cin >> numeroCasa;
                cout << "Ingrese el tipo de casa que quieres crear: \n"
                        "1-Casa con Telefono Fijo\n"
                        "2-Casa con Nauta Hogar\n";
                int i;
                cin >> i;

                if (i == 1) {
                    cout << "Introduce el tiempo a consumir:  \n";
                    string numT;
                    int time;
                    cin >> time;
                    cout << "Introduce el numero de telefono: \n";
                    cin >> numT;
                    CasaTel *ct = new CasaTel(nombrePropietario, numeroCasa, time, numT);
                    reparto.registrarCasa(ct);
                } else {
                    cout << "Introduce el tiempo a consumir: \n";
                    string user;
                    int time;
                    cin >> time;
                    cout << "Introduce el usuario: \n";
                    cin >> user;
                    CasaNautaH *ct = new CasaNautaH(nombrePropietario, numeroCasa, time, user);
                    reparto.registrarCasa(ct);
                }
            }
                break;


            case 2: {
                int numeroCasa;
                cout << "Ingrese el numero de la casa a eliminar: ";
                cin >> numeroCasa;
                reparto.eliminarCasa(numeroCasa);
                break;
            }


            case 3: {
                int numeroCasa;
                double nuevoTiempo;
                cout << "Ingrese el numero de la casa a modificar: ";
                cin >> numeroCasa;
                cout << "Ingrese el nuevo tiempo a consumir: ";
                cin >> nuevoTiempo;
                reparto.modificarTiempo(numeroCasa, nuevoTiempo);
                break;
            }

            case 4: {
                reparto.mostrarTodasCasas();
                break;
            }

            case 5: {
                cout << "Saliendo del programa.\n";
                break;
            }

            default:
                cout << "Opcion no valida.Ingrese una opcion valida.\n";
                break;
        }
    } while (opcion != 5);
    return 0;
}
