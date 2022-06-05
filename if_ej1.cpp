#include "iostream"
using namespace std;
int main(){
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

    if(n == 1){
        cout << "one\n";
    }else{
        if(n == 2){
            cout << "two\n";
        }else{
            if(n == 3){
                cout << "three\n";
            }else{
                if(n == 4){
                    cout << "four\n";
                }else{
                    if(n == 5){
                        cout << "five\n";
                    }else{
                        if(n == 6){
                            cout << "six\n";
                        }else{
                            if(n == 7){
                                cout << "seven\n";
                            }else{
                                if(n == 8){
                                    cout << "eigth\n";
                                }else{
                                    if(n == 9){
                                        cout << "nine\n";
                                    }else{
                                        cout << "numero no valido\n";
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}