#include <stdio.h>

int fatorial(int numero){
    
    int resul = numero;
    
    for(int i = 2; i < numero; i++){
        resul = resul * i;
    }
    return resul;
}