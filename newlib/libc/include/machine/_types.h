/*
 *  $Id: _types.h,v 1.3 2007/09/07 21:16:25 jjohnstn Exp $
 */

#ifndef _MACHINE__TYPES_H
#define _MACHINE__TYPES_H
#include <machine/_default_types.h>

/*
 * TIC64X: Because we're not always using GCC, the wint_t type is not always
 * defined. It's also used throughout newlib; so, define it here as a
 * workaround
 */
#if defined(__TIC64X__)
typedef unsigned int wint_t;
#endif

#endif
