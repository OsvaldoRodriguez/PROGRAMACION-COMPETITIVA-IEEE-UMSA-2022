#include "iostream"
using namespace std;
int main(){
    

    int numero = 2;

    // PRIMERA FORMA DEL IF
    // numero es igual a 2?  ->  numero == 2
    if( numero == 2 ){
        // aqui va el codigo
        cout << "numero es igual a 2\n";
    }


    

    cout << "2DA FORMA DEL IF\n";

    /* Verificar si un numero es par o impar */

    int n = 6;

    // leer por teclado
    // lectura de la variable n
    cin >> n;

    int residuo = n % 2;

    if(residuo == 0){ // si es verdad, entonces es par
        cout << "el  numero " << n << " es par\n";
    }else{
        // cuando la condicion es falsa
        cout << "el numero " << n << " es impar\n";
    }

    return 0;
}