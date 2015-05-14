#ifndef		UTILS_H_
# define	UTILS_H_

#if defined __linux
# define CLEAN_SCREEN "clear"
#else
# define CLEAN_SCREEN "cls"
#endif

void cls();

#endif
