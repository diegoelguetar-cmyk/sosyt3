#include <stddef.h>
//#include "prev.h"

typedef struct nodo {
  int x;
  struct nodo *izq, *der, *prev, *prox;
} Nodo;


void asignarPrev(Nodo *t, Nodo **pprev) {
    if (t == NULL) return;

    asignarPrev(t->izq, pprev);  

        
    if (*pprev != NULL) {
        (*pprev)->prox = t;   
        ((*pprev)-> prox)->prev = *pprev;
    }
    *pprev = t;
    (*pprev)->prox = NULL; 

    asignarPrev(t->der, pprev); 
}