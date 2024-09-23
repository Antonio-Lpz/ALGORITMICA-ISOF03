// nombre edad
#include <iostream>

using namespace std;

int main(){
    string nombre, apellido;
    int edad;

    cout << "introduce tu nombre: ";
    cin >> nombre;
    cout << "introduzca su apellido: ";
    cin >> apellido;
    cout << "introduzca su edad: ";
    cin >> edad;

    cout << "Hola, " << nombre << " " << apellido << ". tienes " << edad << " años." << endl ;

    return 0;
}
