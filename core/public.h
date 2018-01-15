/*

*/
#ifndef __PUBLIC_H_
#define __PUBLIC_H_

typedef unsigned char u8;
typedef unsigned int u16;
typedef unsigned long u32;
typedef signed char s8;
typedef signed int s16;
typedef signed long s32;
typedef float float32;
typedef u8 bool;

typedef volatile unsigned char vu8;
typedef volatile unsigned long vu32;

typedef void(*pFun)(u32);

#define HIGH 1
#define LOW 0
#define TRUE 1
#define FALSE 0
#define SUCCESS 1
#define OK 1
#define ERROR 0

#include "../config.h"
#endif
