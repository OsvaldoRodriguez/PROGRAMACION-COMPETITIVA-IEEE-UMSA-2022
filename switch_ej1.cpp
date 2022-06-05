#include "iostream"
using namespace std;
int main(){
    // aqui va el codigo
    /*
    Dado un numero n, mostrar su equivalente en ingles


    1    one
    2    two
    3    three
    4    four

    9    nine
    */
    int n;
    cin >> n;
    switch(n){
        case 1:  
            cout << "one\n";
            break;

        case 2: 
            cout << "two\n";
            break;

        case 3: 
            cout << "three\n";
            break;

        case 4: 
            cout << "four\n";
            break;
        
        case 5: 
            cout << "five\n";
            break;
        
        
        // se ejecuta cuando ningun case ha sido verdad
        default:   
            cout << "numero no valido\n"; 
        // completar hasta el 9
   }



    return 0;
}