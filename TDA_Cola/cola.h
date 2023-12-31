#ifndef COLA_H
#define COLA_H
#define MAX 100

struct cola{
    double arr[MAX];
    int len;
    int frente;
    int final;
};

typedef struct cola Cola;

Cola init();
Cola encolar(Cola c, double x);
Cola desencolar(Cola c);
double frente(Cola c);
double final(Cola c);
int size(Cola c);
void desplegar(Cola c);

#endif  

