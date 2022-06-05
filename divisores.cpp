#include "iostream"
using namespace std;
int main(){
    /*
    Hallar todos los divisores de un numero
    10   -> 1, 2, 5, 10
    12   -> 1, 2, 3, 4, 6, 12
    9    -> 1, 3, 9
    */


    long long n;
    cin >> n;

    long long contador = 0;
    for(long long i = 1; i <= n; i++){
        if(n % i == 0){ // si es verdad, entonces i es un divisor de n
            contador++;
        }
    }
    cout << contador  << "\n";
    // para n = 10^14 tardaria aprox 11 dias




    return 0;
}