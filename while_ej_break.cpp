#include "iostream"
using namespace std;
int main(){
    
    /*
    dado un numero n mostrar los digitos de los numeros de derecha a izquierda, 
    el programa debe terminar cuando haya un digito k
    */

    int n;
    cin >> n;
    int k;
    cin >> k;

    while(n > 0){
        int digito = n % 10;
        if(digito == k){
            break;
        }
        cout << digito << "\n";
        n = n / 10;

    }


    return 0;
}