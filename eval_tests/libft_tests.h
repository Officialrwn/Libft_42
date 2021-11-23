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

# define FNHEADER(fn) printf("######################################################################\nShowing results for %s\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n", fn)
# define EOLHEADER() printf("\n")

# define iTESTOK(fn, n, ft, libc) printf("[%s][test #%d] ft: %d std: %d	[OK]\n", fn, n, ft, libc)
# define cTESTOK(fn, n, ft, libc) printf("[%s][test #%d] ft: %c std: %c	[OK]\n", fn, n, ft, libc)
# define sTESTOK(fn, n, ft, libc) printf("[%s][test #%d] ft: %s std: %s	[OK]\n", fn, n, ft, libc)
# define iTESTFAIL(fn, n, ft, libc) printf("[%s][test #%d] ft: %d std: %d [FAIL] < [!]\n",fn , n, ft, libc)
# define cTESTFAIL(fn, n, ft, libc) printf("[%s][test #%d] ft: %c std: %c [FAIL] < [!]\n",fn, n, ft, libc)
# define sTESTFAIL(fn, n, ft, libc) printf("[%s][test #%d] ft: %s std: %s [FAIL] < [!]\n",fn, n, ft, libc)

void red() {
  printf("\e[1;31m");
}

void green() {
  printf("\e[32m");
  //printf("passed ");
}

void reset() {
  printf("\e[0m");
}

void TESTOK(char *fn, int count, int len) 
{
	printf("[%s] %d ", fn, count);
	//green();
	printf("passed ");
	//reset();
	printf("%d total ", len);
	//green();
	printf("[OK]\n");
	//reset();
}

void TESTFAIL(char *fn, int count, int len) 
{
	printf("[%s] %d ", fn, count);
	//green();
	printf("passed ");
	//reset();
	printf("%d total ", len);
	//red();
	printf("[FAIL]\n");
	//reset();
}

#endif