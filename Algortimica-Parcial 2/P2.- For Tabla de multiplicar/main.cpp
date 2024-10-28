#include <iostream>

using namespace std;

int main(){
     int num;

     cout <<"Ingrese numero para determinar su tabla de multiplicar: "<< endl;
     cin >> num;

    cout << "tabla de multiplicar del " << num << ":" <<endl;
    for (int i =1; i<=10; i++){
        cout << num << "x" << i << "="<< num * i<< endl;
    }
    return 0;
}
