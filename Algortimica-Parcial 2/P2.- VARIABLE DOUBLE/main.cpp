#include <iostream>
using namespace std;

int main(){
    int num;
    int suma = 0;
    int multi = 1;

    cout << "ingresa un numero (que no sea 0 para continuar, ingresa 0 para terminar):" << endl;
    while (true) {
       cout << "numero: ";
       cin >> num;

       if (num == 0) {
        break;
       }

       suma += num;

       multi *= num;
    }
    cout << "total de la suma: " << suma << endl;
    cout << "total de la multiplicacion: " << multi <<  endl;

    return 0;
}

