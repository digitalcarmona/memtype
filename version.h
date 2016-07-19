#ifndef _VERSION_H_
#define _VERSION_H_

#define TOSTR(x)    #x
#define DEFINE_TO_STR(x) TOSTR(x)

#define MEMTYPE_VERSION MEMTYPE_VERSION_MAJOR.MEMTYPE_VERSION_MINOR.MEMTYPE_VERSION_PATCH
#define MEMTYPE_STR     MemType

#define MEMTYPE_VERSION_STR DEFINE_TO_STR(MEMTYPE_STR MEMTYPE_VERSION)


#define MEMTYPE_VERSION_MAJOR  3
#define MEMTYPE_VERSION_MINOR  2
#define MEMTYPE_VERSION_PATCH  0

#endif
