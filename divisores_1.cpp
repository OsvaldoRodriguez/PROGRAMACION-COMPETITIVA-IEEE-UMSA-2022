#include "iostream"
#include "math.h"
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
    /// i <= sqrt(n)  ->  i^2 <= n  ->  i * i <= n
    for(long long i = 1; i * i <= n; i++){
        if(n % i == 0){ // si es verdad, entonces i es un divisor de n
            contador++;
            if(i != (n / i)){
                contador++;
            }
        }
    }
    cout << contador << "\n";


    // como determinar si un numero es primo



    return 0;
}