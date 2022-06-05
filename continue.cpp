#include "iostream"
using namespace std;
int main(){
    
    /*
    Mostrar los numeros de 1, 100, menos los que son multiplos de 4



    1 2 3 5 6 7 9 10
    */

    for(int i = 1; i <= 100; i = i + 1){
       if(i % 4 == 0){
           for(int j = 1; j <= 10; j++){

                continue;
           }
       }
       cout << i << "\n";
    }


   


    return 0;
}