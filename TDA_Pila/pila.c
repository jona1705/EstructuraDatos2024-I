#include <stdio.h>
#include <stdbool.h>
#include <float.h>
#include "pila.h"

Pila init(){
    Pila p;
    int i;
    for(i=0; i<MAX; i++){
        p.A[i] = 0.0;
    }
    p.tope = -1;
    return p;
}

// Operaciones auxiliares
static bool esLlena(Pila p){
    return p.tope == MAX-1;
}

static bool esVacia(Pila p){
    return p.tope == -1;
}

Pila push(Pila p, double x){
    if(esLlena(p)){
        printf("\n[] Pila Llena ...\n");
    } else{
        p.A[++p.tope] = x;
    }
    return p;
}

Pila pop(Pila p){
    if(esVacia(p)){
        printf("\n[] Pila Vacia ...\n");
    } else{
        p.tope--;
    }
    return p;
}

double peak(Pila p){
    if(!esVacia(p)){
        return p.A[p.tope];
    } 
    return -1.0;
}

void desplegar(Pila p){
    if(esVacia(p)){
        printf("\n[] Pila Vacia ...\n");
    } else{
        int i;
        for(i=p.tope; i>=0; i--){
            printf("%.2lf ", p.A[i]);
        }
    }
}
