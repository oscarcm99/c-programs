#ifndef __INTERFAZ_H__
#define __INTERFAZ_H__

#include "comun.h"

#ifdef __cpp
extern "C"{
#endif
void introducir(char a[N][N]);
void coordinic(char a[N][N]);
void inicio();
void pintar_matriz(char a[N][N]);
void usuario1(char a[N][N]);
void usuario2(char a[N][N]);
int ganador(char a[N][N]);
#ifdef __cpp
}
#endif

#endif

