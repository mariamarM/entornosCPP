// raiz cuadrada.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a;
    int b;
    int c;
    cout << "Introduce el numero a: ";
    cin >> a;
    if (a == 0) { //si en este caso es igual a 0 dara esta alerta
        cout << "No puede ser cero";
    }
    else {
        cout << "Introduce el numero b: ";
        cin >> b;
        cout << "Introduce el numero c: ";
        cin >> c;

        double discriminante =( b * b - 4 * a * c);
        double raiz = sqrt(discriminante);
        if (discriminante > 0) {
            cout << "No se puede realizar"; //si es 0 no se puede hacer
        }
        else {
            double raiz = sqrt(discriminante);
            double resultado = (-1 * b - raiz) / (2 * a);//resultado 1
            double resultadop = (-1 * b + raiz) / (2 * a); //resultado 2
            cout << "valor: " << resultado << endl;
            cout << "valor segundo: " << resultadop << endl; //da los dos valores
        }
    }

}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
