#ifndef __INTERFAZ_H__
#define __INTERFAZ_H__
#include "global.h"
#ifdef __cpp
extern "C"{
#endif
void pintar(int matriz[M][N]);
void poblacion_inicial(int matriz[M][N]);
void rellena(int matriz[M][N]);
#ifdef __cpp
}
#endif
#endif
