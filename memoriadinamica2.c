#include <stdio.h>
#include <stdlib.h>
#define N 10

/* 
	Clase: 11/08/2023
	Asignación de memoria para un arreglo
	con malloc
*/
	
int main(){
    int * p = NULL;
    int i;

    p = malloc(N * sizeof(int)); 
    if(p == NULL){
        exit(0);
    }
	
	// Asignamos valores al arreglo del 1 a N    
    for(i=0; i<N; i++){
        p[i] = i+1;
    }

	// Imprimimos los N valores
    for(i=0; i<N; i++){
        printf("\np[%d]=%d", i, p[i]);
    }
    
    // Liberar la memoria
    free(p);

    return 0;
}
