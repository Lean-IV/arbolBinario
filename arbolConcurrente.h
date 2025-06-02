#ifndef ARBOLCONCURRENTE_H_INCLUDED
#define ARBOLCONCURRENTE_H_INCLUDED

#include "arbol.h"
#include "utilArbol.h"

/**
 * Recorre el �rbol en preorden usando concurrencia.
 * pre: arbol puede ser NULL.
 * post: Se recorren los nodos en preorden usando m�ltiples hilos.
 */
void preOrderConcurrente(ArbolPtr arbol);

/**
 * Recorre el �rbol en inorden usando concurrencia.
 * pre: arbol puede ser NULL.
 * post: Se recorren los nodos en inorden usando m�ltiples hilos.
 */
void inOrderConcurrente(ArbolPtr arbol);

/**
 * Recorre el �rbol en postorden usando concurrencia.
 * pre: arbol puede ser NULL.
 * post: Se recorren los nodos en postorden usando m�ltiples hilos.
 */
void postOrderConcurrente(ArbolPtr arbol);

#endif // ARBOLCONCURRENTE_H_INCLUDED
