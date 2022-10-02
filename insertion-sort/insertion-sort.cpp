// insertion-sort.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{
    int v[] = { 2, 7, 8, 9, 0, 8, 1, -1, -2 };
    int size = sizeof(v) / sizeof(*v);
    int aux;

    cout << endl;
    for (int i = 0; i < size; i++) {
        cout << v[i] << " ";
    }

    for (int i = 1; i < size; i++) {
        aux = v[i];
        int j;
        for ( j= i-1; j>=0 && aux < v[j]; j--) {
            v[j + 1] = v[j]; 
        }
        v[j + 1] = aux;
        cout << endl;
        for (int n = 0; n < size; n++) {
            cout << v[n] << " ";
        }
    }



    cout << endl;
    for (int i = 0; i < size; i++) {
        cout << v[i] << " ";
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
