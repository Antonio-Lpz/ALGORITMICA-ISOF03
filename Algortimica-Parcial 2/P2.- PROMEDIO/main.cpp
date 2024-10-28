#include <iostream>

using namespace std;

int main(){
    float calificacion1, calificacion2, calificacion3, promedio;

    cout << "ingresa la primera calificacion: ";
    cin >> calificacion1;

    cout << "ingresa la segunda calificacion: ";
    cin >> calificacion2;

    cout << "ingresa la tercera calificacion: ";
    cin >> calificacion3;

    promedio = (calificacion1 + calificacion2 + calificacion3) / 3;
    if (promedio >= 6){
        cout << "APROBASTE, ¡FELICIDADES!" << endl;
    }else {
        cout << "REPROBASTE, VUELVE A INTENTARLO" << endl;
    }

   return 0;
}
