#include "iostream"
using namespace std;
int main(){
    // aqui va el codigo
    // break se puede usar en estructuras de control ciclicas
    // for, while, do-while, switch

    // utilizacion en for

    // genera los numeros del 1 al 10
    // pero cuando se encuentra un numero divisible 5 terminar de mostrar los numeros
    for(int i = 1; i <= 10; i++){
        if(i % 5 == 0){ // que es divisible por 5
            break;
        }
        cout << i << '\n';
    }


    // como usar el break en el while

    /*
    dado un numero n mostrar los digitos de los numeros de derecha a izquierda, 
    el programa debe terminar cuando haya un digito k
    */

   


    return 0;
}