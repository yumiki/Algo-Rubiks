#ifndef		UTILS_H_
# define	UTILS_H_

#if defined WIN32
# define CLEAN_SCREEN "cls"
#elif defined WIN64
# define CLEAN_SCREEN "cls"
#elif defined __linux
# define CLEAN_SCREEN "clear"
#endif

void cls();

#endif
