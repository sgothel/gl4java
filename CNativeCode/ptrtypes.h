#ifndef _PTRTYPES_H_
#define _PTRTYPES_H_

#if (defined(WIN32))

typedef unsigned int uintptr_t;

#elif defined(linux)

typedef unsigned int uintptr_t;

#elif defined(__sun)  /* Solaris */

#ifdef _LP64
typedef unsigned long uintptr_t;
#else
typedef unsigned int uintptr_t;
#endif

#else

#error Please port ptrtypes.h to your platform

#endif

#endif /* #defined _PTRTYPES_H_ */
