#include <iostream>

using namespace std;

int main(){
    int num;
    cout << "ingresa un numero del 1 al 5: " << endl;
    cin >> num;
    switch (num){
       case 1:
          cout << " el numero es uno" ; break;
       case 2:
          cout << " el numero es dos" ; break;
       case 3:
          cout << "el numero es tres" ; break;
       case 4:
          cout << "el numero es cuatro" ; break;
       case 5:
          cout << "el numero es cinco " ; break;
       default:
          cout << " el numero es invalido"; break;

       }
       return 0;
}
