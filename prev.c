#include <stddef.h>

#include "prev.h"

typedef struct nodo {
  int x; 
  struct nodo *izq, *der; 
  struct nodo *prev, *prox;
} Nodo;

void asignarPrev(Nodo *t, Nodo **pprev) {

  if (*t == NULL) {
    return **pprev;
  }
  
  **pprev->prox = NULL; 
  
  else if (*t->izq != NULL) {
    **pprev->prox = asignarPrev(*t->izq, *t);
    **pprev->prox->prev = **pprev; 
    **pprev = **pprev->prox;
  }
  else if (*t != NULL) {
    **pprev->prox = *t;
    **pprev->prox->prev = **pprev;
    **pprev = **pprev->prox;
  }

  else if (*t->der != NULL) {
    **pprev->prox = asignarPrev(*t->der, *t);
    **pprev->prox->prev = **pprev; 
    **pprev = **pprev->prox;
  }

}
