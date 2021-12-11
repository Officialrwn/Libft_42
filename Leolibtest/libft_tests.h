#ifndef LIBFT_TESTS_H
# define LIBFT_TESTS_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <strings.h>
# include <stdio.h>
# include <limits.h>
# include <ctype.h>
# include <assert.h>
# include "libft.h"

# define FNHEADER(fn) printf("######################################################################\nShowing results for %s\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n", fn)
# define EOLHEADER() printf("\n")

# define iTESTOK(fn, n, ft, libc) printf("\033[33m[%s]\033[0m[test #%d]\tft: %d\tstd: %d\t\033[32m[OK]\033[0m\n", fn, n, ft, libc)
# define iTESTFAIL(fn, n, ft, libc) printf("\033[33m[%s]\033[0m[test #%d] ft: %d\tstd: %d\t\033[1;31m[FAIL]\033[0m\n",fn , n, ft, libc)

# define sTESTOK(fn, n, ft, libc) printf("\033[33m[%s]\033[0m[test #%d] ft: %s\tstd: %s\t\033[32m[OK]\033[0m\n", fn, n, ft, libc)
# define sTESTFAIL(fn, n, ft, libc) printf("\033[33m[%s]\033[0m[test #%d] ft: %s\tstd: %s\t\033[1;31m[FAIL]\033[0m\n",fn, n, ft, libc)

# define cTESTOK(fn, n, ft, libc) printf("\033[33m[%s]\033[0m[test #%d] ft: %c\tstd: %c\t\033[32m[OK]\033[0m\n", fn, n, ft, libc)
# define cTESTFAIL(fn, n, ft, libc) printf("\033[33m[%s]\033[0m[test #%d] ft: %c\tstd: %c\t\033[1;31m[FAIL]\033[0m\n",fn, n, ft, libc)

# define pTESTOK(fn, n, ft, libc) printf("\033[33m[%s]\033[0m[test #%d] ft: %p\tstd: %p\t\033[32m[OK]\033[0m\n", fn, n, ft, libc)
# define pTESTFAIL(fn, n, ft, libc) printf("\033[33m[%s]\033[0m[test #%d] ft: %p\tstd: %p\t\033[1;31m[FAIL]\033[0m\n",fn, n, ft, libc)

void yellow() {
	printf("\033[33m");
}
void red() {
  printf("\033[1;31m");
}

void green() {
  printf("\033[32m");
  //printf("passed ");
}

void reset() {
  printf("\033[0m");
}

void TESTOK(char *fn, int count, int len) 
{
	printf("\033[33m[%s]\033[0m\t%4d ", fn, count);
	green();
	printf("passed ");
	reset();
	printf("%4d \033[33mtotal\t", len);
	green();
	printf("[OK]\n");
	reset();
}

void TESTFAIL(char *fn, int count, int len) 
{
	printf("\033[33m[%s]\033[0m\t%4d ", fn, count);
	green();
	printf("passed ");
	reset();
	printf("%4d \033[33mtotal\t", len);
	red();
	printf("[FAIL]\n");
	reset();
}

#endif
