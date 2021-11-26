/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_libft.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leotran <leotran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:37:33 by leotran           #+#    #+#             */
/*   Updated: 2021/11/25 14:48:10 by leotran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_tests.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

char 		cmaxint[] = "2147483647";
char 		cminint[] = "-2147483648";
char 		cmaxint1[] = "2147483650";
char 		cminint1[] = "-2147483650";
int			imaxint = 2147483647;
int			iminint = -2147483648;
long		imaxint1 = 2147483650;
long long	iminint1 = -2147483650;
int 		PRINTSUCCESS = 0;


void	test_atoi(void)
{
	char *testname = "ft_atoi";
	if (PRINTSUCCESS == 1)
				FNHEADER(testname);
	int len = 0;
	int count = 0;

	char *arr[] = { 
		"0123456789", 
		"-0123456789",
		"	 - 0123456789",
		"	 + 01 23456789",
		"",	"0", "-0", "-1", "1", "10",
		cminint, cmaxint, cmaxint1, 
		0 };

	while (arr[len])
		len++;
	for (int num = 0; num < len; num++)
	{
		int i = ft_atoi(arr[num]);
	 	int ii = atoi(arr[num]);
		if (i == ii)
		{
			count++;
			if (PRINTSUCCESS == 1)
				iTESTOK(testname, num, i, ii);
		}
		else
			iTESTFAIL(testname, num, i, ii);
	}
	if (PRINTSUCCESS == 1)
		EOLHEADER();	
	if (count == len)
		TESTOK(testname, count, len);
	else
		TESTFAIL(testname, count, len);
}

void	test_bzero(void)
{
	char *testname = "ft_bzero";
	if (PRINTSUCCESS == 1)
			FNHEADER(testname);
	int len = 30;
	int count = 0;

	char arr0[] = "JelloWorld";
	char arr1[] = "HelloWorld";
	char arr2[] = "0123456789";
	char arr3[] = "9876543210";
	char arr6[] = "Hell\0Warld";
	char arr7[] = "Hell\0World";

	ft_bzero(arr0, 10);
	memset(arr1,0, 10);
	ft_bzero(arr2, 10);
	memset(arr3,0, 10);
	ft_bzero(arr6, 10);
	memset(arr7,0, 10);

	for (int num = 0; num < 10; num++)
	{
		if (arr0[num] == arr1[num])
			count++;
		else
			cTESTFAIL(testname, num, arr0[num], arr1[num]);
			
		if (arr2[num] == arr3[num])
			count++;
		else
			cTESTFAIL(testname, num, arr2[num], arr3[num]);
		if (arr6[num] == arr7[num])
			count++;
		else
			cTESTFAIL(testname, num, arr6[num], arr7[num]);
	}
	
	if (PRINTSUCCESS == 1)
		EOLHEADER();	
	if (count == len)
		TESTOK(testname, count, len);
	else
		TESTFAIL(testname, count, len);
}

void	test_isalnum(void)
{
	char *testname = "ft_isalnum";
	if (PRINTSUCCESS == 1)
			FNHEADER(testname);
	int count = 0;
	int len = 128;
	
	for (int num = 0; num < len; num++)
	{
		int i = ft_isalnum(num);
	 	int ii = isalnum(num);

		if (ii == 0)
		{
			if (i == ii)
			{
				count++;
				if (PRINTSUCCESS == 1)
					iTESTOK(testname, num, i, ii);
			}
			else
				iTESTFAIL(testname, num, i, ii);
		}
		else
		{
			if (i >= 1)
			{
				count++;
				//iTESTOK(num, i, ii);
			}
			else
				iTESTFAIL(testname, num, i, ii);	
		}
	}
	if (PRINTSUCCESS == 1)
		EOLHEADER();	
	if (count == len)
		TESTOK(testname, count, len);
	else
		TESTFAIL(testname, count, len);
}

void	test_isalpha(void)
{
	char *testname = "ft_isalpha";
	if (PRINTSUCCESS == 1)
			FNHEADER(testname);
	int count = 0;
	int len = 128;
	
	for (int num = 0; num < len; num++)
	{
		int i = ft_isalpha(num);
	 	int ii = isalpha(num);

		if (ii == 0)
		{
			if (i == ii)
			{
				count++;
				if (PRINTSUCCESS == 1)
					iTESTOK(testname, num, i, ii);
			}
			else
				iTESTFAIL(testname, num, i, ii);
		}
		else
		{
			if (i >= 1)
			{
				count++;
				if (PRINTSUCCESS == 1)
					iTESTOK(testname, num, i, ii);
			}
			else
				iTESTFAIL(testname, num, i, ii);	
		}
	}
	if (PRINTSUCCESS == 1)
		EOLHEADER();	
	if (count == len)
		TESTOK(testname, count, len);
	else
		TESTFAIL(testname, count, len);
}

void	test_isascii(void)
{
	char *testname = "ft_isascii";
	if (PRINTSUCCESS == 1)
			FNHEADER(testname);
	int count = 0;
	int len = 128;
	
	for (int num = 0; num < len; num++)
	{
		int i = ft_isascii(num);
	 	int ii = isascii(num);

		if (ii == 0)
		{
			if (i == ii)
			{
				count++;
				if (PRINTSUCCESS == 1)
					iTESTOK(testname, num, i, ii);
			}
			else
				iTESTFAIL(testname, num, i, ii);
		}
		else
		{
			if (i >= 1)
			{
				count++;
				if (PRINTSUCCESS == 1)
				iTESTOK(testname, num, i, ii);
			}
			else
				iTESTFAIL(testname, num, i, ii);	
		}
	}
	if (PRINTSUCCESS == 1)
		EOLHEADER();	
	if (count == len)
		TESTOK(testname, count, len);
	else
		TESTFAIL(testname, count, len);
}

void	test_isdigit(void)
{
	char *testname = "ft_isdigit";
	if (PRINTSUCCESS == 1)
			FNHEADER(testname);
	int count = 0;
	int len = 128;
	
	for (int num = 0; num < len; num++)
	{
		int i = ft_isdigit(num);
	 	int ii = isdigit(num);

		if (ii == 0)
		{
			if (i == ii)
			{
				count++;
				if (PRINTSUCCESS == 1)
					iTESTOK(testname, num, i, ii);
			}
			else
				iTESTFAIL(testname, num, i, ii);
		}
		else
		{
			if (i >= 1)
			{
				count++;
				if (PRINTSUCCESS == 1)
					iTESTOK(testname, num, i, ii);
			}
			else
				iTESTFAIL(testname, num, i, ii);	
		}
	}
	if (PRINTSUCCESS == 1)
		EOLHEADER();	
	if (count == len)
		TESTOK(testname, count, len);
	else
		TESTFAIL(testname, count, len);
}

void	test_isprint(void)
{
	char *testname = "ft_isprint";
	if (PRINTSUCCESS == 1)
			FNHEADER(testname);
	int count = 0;
	int len = 128;
	
	for (int num = 0; num < len; num++)
	{
		int i = ft_isprint(num);
	 	int ii = isprint(num);

		if (ii == 0)
		{
			if (i == ii)
			{
				count++;
				if (PRINTSUCCESS == 1)
					iTESTOK(testname, num, i, ii);
			}
			else
				iTESTFAIL(testname, num, i, ii);
		}
		else
		{
			if (i >= 1)
			{
				count++;
				if (PRINTSUCCESS == 1)
					iTESTOK(testname, num, i, ii);
			}
			else
				iTESTFAIL(testname, num, i, ii);	
		}
	}
	if (PRINTSUCCESS == 1)
		EOLHEADER();	
	if (count == len)
		TESTOK(testname, count, len);
	else
		TESTFAIL(testname, count, len);
}

void	test_itoa(void)
{
	char *testname = "ft_itoa";
	if (PRINTSUCCESS == 1)
			FNHEADER(testname);
	int count = 0;

	int arr[13][1] = { 
		123456789,  		//0
		-123456789, 		//1
		+123456789, 		//2
		123456789, 			//3
		0,  				//4
		-0, 				//5
		-1, 				//6
		1, 					//7
		10,					//8
		imaxint,			//9
		iminint,			//10	
		imaxint1,			//11
		iminint1,			//12
		};
	
	char ii[13][20];
	int len = 13;
	
	for (int num = 0; num < len; num++)
	{
		char *i = ft_itoa(*arr[num]);
		sprintf(ii[num], "%d", *arr[num]);
		if (strcmp(i, ii[num]) == 0)
		{
			count++;
			if (PRINTSUCCESS == 1)
				sTESTOK(testname, num, i, ii[num]);
		}
		else
			sTESTFAIL(testname, num, i, ii[num]);
	}
	if (PRINTSUCCESS == 1)
		EOLHEADER();	
	if (count == len)
		TESTOK(testname, count, len);
	else
		TESTFAIL(testname, count, len);
}

void	test_memalloc(void)
{
	char *testname = "ft_memalloc";
	int num = 0;
	int count = 0;
	int len = 6;
	char *i = ft_memalloc(5);
	char *ii = "\0\0\0\0\0";
	if (i != NULL)
		count++;
	else 
		sTESTFAIL(testname, num, i, ii);
	for (int n = 0; n < 5; n++)
	{
		if (i[n] == '\0')
			count++;
		else
			cTESTFAIL(testname, num, i[n], ii[n]);
	}
	if (count == len)
		TESTOK(testname, count, len);
	else	
		TESTFAIL(testname, count, len);
}

void	test_memccpy(void)
{
	char *testname = "ft_memccpy";
	if (PRINTSUCCESS == 1)
			FNHEADER(testname);
	int count = 0;
	int len = 5;
	char *arr[] = { "Helloworld", "JellycWorld", "    memccpy basic test", "HelloWorld", "" };
	char i[6][30] = { "world", "cWorld", "   basic test", "", "HelloWorld" };
	char ii[6][30] = { "world", "cWorld", "   basic test", "", "HelloWorld" };
	
	for (int num = 0; num < len; num++)
	{
		ft_memccpy(i[num], arr[num], 'c', 8);
		memccpy(ii[num], arr[num], 'c', 8);
		if (strcmp(i[num], ii[num]) == 0)
			count++;
		else
			sTESTFAIL(testname, num, i[num], ii[num]);
	}
	if (count == len)
		TESTOK(testname, count, len);
	else
		TESTFAIL(testname, count, len);
}

void	test_memcpy(void)
{
	char *testname = "ft_memcpy";
	if (PRINTSUCCESS == 1)
			FNHEADER(testname);
	int count = 0;
	int len = 5;
	char *arr[] = { "Helloworld", "JellycWorld", "    memccpy basic test", "HelloWorld", "" };
	char i[6][30] = { "world", "cWorld", "   basic test", "", "HelloWorld" };
	char ii[6][30] = { "world", "cWorld", "   basic test", "", "HelloWorld" };
	
	for (int num = 0; num < len; num++)
	{
		ft_memcpy(i[num], arr[num], 8);
		memcpy(ii[num], arr[num], 8);
		if (strcmp(i[num], ii[num]) == 0)
			count++;
		else
			sTESTFAIL(testname, num, i[num], ii[num]);
	}
	if (count == len)
		TESTOK(testname, count, len);
	else
		TESTFAIL(testname, count, len);
}

void	test_memchr(void)
{
	char *testname = "ft_memchr";
	if (PRINTSUCCESS == 1)
			FNHEADER(testname);
	int count = 0;
	int len = 7;
	char arr[7][50] = { "Helloworld", "JellycWorld", "  this is a basic test", "", "What are you looking for?"
					, "random strings && c symbols", "Hello\0c hidden" };
	unsigned char c = 'c';
	size_t size = 8;
	
	for (int num = 0; num < len; num++)
	{
		void *i = ft_memchr(arr[num], c, size);
		void *ii = memchr(arr[num], c, size);
		if (i == ii)
			count++;
		else
			pTESTFAIL(testname, num, i, ii);
	}
	if (count == len)
		TESTOK(testname, count, len);
	else
		TESTFAIL(testname, count, len);
}

void	test_memcmp()
{
	char *testname = "ft_memcmp";
	int count = 0;
	int len = 7;
	char arr[7][50] = { "Helloworld", "JellycWorld", "   this is a basic test", "", "What are you looking for?"
					, "random strings && c symbols", "Hello\0c hidden" };
	char arr2[7][50] = { "Helloworld", "HellycWorld", " \tthis is a basic test", "", "What are you looking for?"
					, "random strings && c symbols", "Hello\0f hidden" };
	size_t size = 8;
	
	for (int num = 0; num < len; num++)
	{
		int i = ft_memcmp(arr[num], arr2[num], size);
		int ii = memcmp(arr[num], arr2[num], size);
		if (i == ii || (i > 0 && ii > 0) || (i < 0 && ii < 0))
			count++;
		else
			iTESTFAIL(testname, num, i, ii);
	}
	if (count == len)
		TESTOK(testname, count, len);
	else
		TESTFAIL(testname, count, len);
}

void	test_strncmp()
{
	char *testname = "ft_strncmp";
	int count = 0;
	int len = 7;
	char arr[7][50] = { "Helloworld", "JellycWorld", "   this is a basic test", "", "What are you looking for?"
					, "random strings && c symbols", "Hello\0c hidden" };
	char arr2[7][50] = { "Helloworld", "HellycWorld", " \tthis is a basic test", "", "What are you looking for?"
					, "random strings && c symbols", "Hello\0f hidden" };
	size_t size = 8;
	
	for (int num = 0; num < len; num++)
	{
		int i = ft_strncmp(arr[num], arr2[num], size);
		int ii = strncmp(arr[num], arr2[num], size);
		if (i == ii || (i > 0 && ii > 0) || (i < 0 && ii < 0))
			count++;
		else
			iTESTFAIL(testname, num, i, ii);
	}
	if (count == len)
		TESTOK(testname, count, len);
	else
		TESTFAIL(testname, count, len);
}

void	test_strcmp()
{
	char *testname = "ft_strcmp";
	int count = 0;
	int len = 7;
	char arr[7][50] = { "Helloworld", "JellycWorld", "   this is a basic test", "", "What are you looking for?"
					, "random strings && c symbols", "Hello\0c hidden" };
	char arr2[7][50] = { "Helloworld", "HellycWorld", " \tthis is a basic test", "", "What are you looking for?"
					, "random strings && c symbols", "Hello\0f hidden" };
	
	for (int num = 0; num < len; num++)
	{
		int i = ft_strcmp(arr[num], arr2[num]);
		int ii = strcmp(arr[num], arr2[num]);
		if (i == ii || (i > 0 && ii > 0) || (i < 0 && ii < 0))
			count++;
		else
			iTESTFAIL(testname, num, i, ii);
	}
	if (count == len)
		TESTOK(testname, count, len);
	else
		TESTFAIL(testname, count, len);
}

void	test_strequ()
{
	char *testname = "ft_strequ";
	int count = 0;
	int len = 7;
	char arr[7][50] = { "Helloworld", "JellycWorld", "   this is a basic test", "", "What are you looking for?"
					, "random strings && c symbols", "Hello\0c hidden" };
	char arr2[7][50] = { "Helloworld", "HellycWorld", " \tthis is a basic test", "", "What are you looking for?"
					, "random strings && c symbols", "Hello\0f hidden" };
	int arri[7] = { 1, 0, 0, 1, 1, 1, 1};
	int ii[7];
	for (int num = 0; num < len; num++)
	{
		int i = ft_strequ(arr[num], arr2[num]);
		ii[num] = arri[num];
		if (i == ii[num])
			count++;
		else
			iTESTFAIL(testname, num, i, ii);
	}
	if (count == len)
		TESTOK(testname, count, len);
	else
		TESTFAIL(testname, count, len);
}

void	test_strnequ()
{
	char *testname = "ft_strnequ";
	int count = 0;
	int len = 7;
	size_t size = 8;
	
	char arr[7][50] = { "Helloworld", "JellycWorld", "   this is a basic test", "", "What are you looking for?"
					, "random strings && c symbols", "Hello\0c hidden" };
	char arr2[7][50] = { "Helloworld", "HellycWorld", " \tthis is a basic test", "", "What are you loaaaoking for?"
					, "random strings && c symbols", "Hello\0f hidden" };
	
	int arri[7] = { 1, 0, 0, 1, 1, 1, 1};
	int ii[7];
	
	for (int num = 0; num < len; num++)
	{
		int i = ft_strnequ(arr[num], arr2[num], size);
		ii[num] = arri[num];
		if (i == ii[num])
			count++;
		else
			iTESTFAIL(testname, num, i, ii);
	}
	if (count == len)
		TESTOK(testname, count, len);
	else
		TESTFAIL(testname, count, len);
}

void	test_tolower()
{
	char *testname = "ft_tolower";
	int count = 0;
	int len = 16;
	char arr[] = "!$#HELLOWORLD$@!";
	char *ii = "!$#helloworld$@!";
	for (int num = 0; num < len; num++)
	{
		int i = ft_tolower(arr[num]);
		if (i == ii[num])
			count++;
		else
			cTESTFAIL(testname, num, i, ii[num]);
	}
	if (count == len)
		TESTOK(testname, count, len);
	else
		TESTFAIL(testname, count, len);
}

void	test_toupper()
{
	char *testname = "ft_toupper";
	int count = 0;
	int len = 16;
	char arr[] = "!$#helloworld$@!";
	char *ii = "!$#HELLOWORLD$@!";
	for (int num = 0; num < len; num++)
	{
		int i = ft_toupper(arr[num]);
		if (i == ii[num])
			count++;
		else
			cTESTFAIL(testname, num, i, ii[num]);
	}
	if (count == len)
		TESTOK(testname, count, len);
	else
		TESTFAIL(testname, count, len);
}


int	main(void)
{
	
	test_atoi();
	test_bzero();
	test_isalnum();
	test_isalpha();
	test_isascii();
	test_isdigit();
	test_isprint();
	test_itoa();
	test_memalloc();
	test_memccpy();
	test_memcpy();
	test_memchr();
	test_memcmp();
	test_strncmp();
	test_strcmp();
	test_strequ();
	test_strnequ();
	test_tolower();
	test_toupper();

	/*
	test_memmove();
	test_memset();
	
	test_strcat();
	test_strchr();
	test_strclr();
	test_strcpy();
	test_strdup();
	test_striter();
	test_striteri();
	test_strjoin();
	test_strlcat();
	test_strlen();
	test_strmap();
	test_strmapi();
	test_strncat();
	test_strncpy();
	test_strnew();
	test_strnstr();
	test_strrchr();
	test_strsplit();
	test_strstr();
	test_strsub();
	test_strtrim();


	test_putchar_fd();
	test_putchar();
	test_putendl_fd();
	test_putendl();
	test_putnbr_fd();
	test_putnbr();
	test_putstr_fd();
	test_putstr();
	
	bonuses.
	*/


	return (0);
}
