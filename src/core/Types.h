#ifndef __TYPES_H__
#define __TYPES_H__

typedef unsigned int uint;

#ifndef _WIN32
typedef unsigned long ulong;
#endif
#ifdef _WIN32
typedef unsigned long long ulong;
#endif

//#define INSTANCE_COUNTING

#endif
