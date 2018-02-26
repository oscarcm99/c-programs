#ifndef __INTERFAZ_H__
#define __INTERFAZ_H__
#include "comun.h"
#define RED "\x1b[31m"
#define GREEN "\x1b[32m"
#define YELLOW "\x1b[33m"
#define BLUE "\x1b[34m"
#define MAGENTA "\x1b[35m"
#define CYAN "\x1b[36m"
#define RESET "\x1b[0m"

#ifdef __cpp
extern "C"{
#endif
void ver(int a[M][N]);
void principio();
void numero(int *lugar);
#ifdef __cpp
}
#endif
#endif
