#ifndef __INTERFAZ_H__
#define __INTERFAZ_H__
#include "comun.h"

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"
#ifdef __cpp
extern "C"{
#endif
void ver(int a[M][N]);
void header();
void valor(int *donde);
#ifdef __cpp
}
#endif


#endif