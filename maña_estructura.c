#include <stdio.h>

struct persona{
    int age; 
 };

void  suma(struct persona p) {
    // intentar sumarle 1 a la edad de la persona, solo se modificará en el stack flutter, no en el original
    p.age +=1;

}

// void main() {
//     struct persona p; 
//     p.age = 5; 
//     suma(p); // notar que a pesar de que se trata de la misma persona, no hay cambios en el resultado
//     printf("edad de la persona: %d", p.age);
//     }

// ESTRUCTURAS RECURSIVAS 
typedef struct nodo {
    int x;
    struct nodo *sgte; // hacemos recursión en el llamado a la misma estructura 
} Nodo;



Nodo construir( int x ) {
    
    Nodo *e = malloc(sizeof(Nodo)); 
    // ahora tenemos puntero a un espacio de memoria donde estará mi información del nodo.
    //Una vez que tenemos ese espacio de memoria, pensar en que debemos llegar a la asignación interna de ese espacio de memoria
    e->x = x;
    e->sgte = NULL;
}

void main() {

    //puntero al nodo       donde se encontrá la información
    Nodo *n1    =    malloc(sizeof(Nodo));
    Nodo *n2 = malloc (sizeof(Nodo));

    n1->x=2;
    n1->sgte = n2; 
    n2-> x = 3;
    n2->sgte = NULL;
}