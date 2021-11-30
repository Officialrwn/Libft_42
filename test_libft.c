/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_libft.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leotran <leotran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:37:33 by leotran           #+#    #+#             */
/*   Updated: 2021/11/30 16:34:04 by leotran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_tests.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdbool.h>

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

	int arr[13] = { 
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
	
	char ii[13][30];
	int len = 13;
	
	for (int num = 0; num < len; num++)
	{
		char *i = ft_itoa(arr[num]);
		sprintf(ii[num], "%d", arr[num]);
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
			iTESTFAIL(testname, num, i, ii[num]);
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
			iTESTFAIL(testname, num, i, ii[num]);
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

void	test_memmove(void)
{
	char *testname = "ft_memmove";
	int count = 0, len = 5;
	
	char arr[5][30] = { "Helloworld", "JellycWorld", "    memccpy basic test", "HelloWorld", "" };
	char arr2[5][30] = { "Helloworld", "JellycWorld", "    memccpy basic test", "HelloWorld", "" };
	char *i, *ii;
	
	for (int num = 0; num < len; num++)
	{
		i = ft_memmove(arr[num] + 3, arr[num] + 0, 6);
		ii = memmove(arr2[num] + 3, arr2[num] + 0, 6);
		if (strcmp(i, ii) == 0)
			count++;
		else
			sTESTFAIL(testname, num, i, ii);
	}
	for (int num = 0; num < len; num++)
	{
		i = ft_memmove(arr[num] + 2, arr[num] + 4, 6);
		ii = memmove(arr2[num] + 2, arr2[num] + 4, 6);
		if (strcmp(i, ii) == 0)
			count++;
		else
			sTESTFAIL(testname, num, i, ii);
	}
	if (count == 10)
		TESTOK(testname, count, 10);
	else
		TESTFAIL(testname, count, 10);
}

void	test_memset()
{
	char *testname = "ft_memset";
	int len = 5, count = 0;
	
	char arr[5][30] = { "Helloworld", "JellycWorld", "    memccpy basic test", "HelloWorld", "" };
	char arr2[5][30] = { "Helloworld", "JellycWorld", "    memccpy basic test", "HelloWorld", "" };
	char *i, *ii;
	char c = 'c', zero = '\0';
	
	for (int num = 0; num < len; num++)
	{
		i = ft_memset(arr[num], c, 6);
		ii = memset(arr2[num], c, 6);
		if (strcmp(i, ii) == 0)
			count++;
		else
			sTESTFAIL(testname, num, i, ii);
	}
	for (int num = 0; num < len; num++)
	{
		i = ft_memset(arr[num], zero, 6);
		ii = memset(arr2[num], zero, 6);
		if (memcmp(i, ii, 8) == 0)
			count++;
		else
			sTESTFAIL(testname, num, i, ii);
	}
	if (count == 10)
		TESTOK(testname, count, 10);
	else
		TESTFAIL(testname, count, 10);
}

void	test_strcat()
{
	char *testname = "ft_strcat";
	int count = 0, len = 8;
	char *src = "World", *src2 = "";
	char arr[11] = "Hello", arr2[11] = "Hello", arr3[11] = "", arr4[11] = "";

	char *i = ft_strcat(arr, src);
	char *ii = strcat(arr2, src);

	if (strcmp(i, ii) == 0)
		count++;
	else
		sTESTFAIL(testname, 0, i, ii);
	
	if (i[strlen(i)] == '\0')
		count++;
	else
		cTESTFAIL(testname, 1, i[strlen(i)], '0');

	i = ft_strcat(arr3, src2);
	ii = strcat(arr4, src2);
	if (strcmp(i, ii) == 0)
		count++;
	else
		sTESTFAIL(testname, 2, i, ii);
	if (i[strlen(i)] == '\0')
		count++;
	else
		cTESTFAIL(testname, 3, i[strlen(i)], '0');

	i = ft_strcat(arr3, src);
	ii = strcat(arr4, src);
	if (strcmp(i, ii) == 0)
		count++;
	else
		sTESTFAIL(testname, 4, i, ii);
		
	if (i[strlen(i)] == '\0')
		count++;
	else
		cTESTFAIL(testname, 5, i[strlen(i)], '0');

	i = ft_strcat(arr, src2);
	ii = strcat(arr2, src2);
	if (strcmp(i, ii) == 0)
		count++;
	else
		sTESTFAIL(testname, 5, i, ii);
		
	if (i[strlen(i)] == '\0')
		count++;
	else
		cTESTFAIL(testname, 6, i[strlen(i)], '0');

	if (count == len)
		TESTOK(testname, count, len);
	else
		TESTFAIL(testname, count, len);
}

void	test_strchr(void)
{
	char *testname = "ft_strchr";
	int count = 0, len = 7;
	char arr[7][50] = { "Helloworld", "JellycWorld", "  this is a basic test", "", "What are you looking for?"
					, "random strings && c symbols", "Hello\0c hidden" };
	unsigned char c = 'c';
	
	for (int num = 0; num < len; num++)
	{
		char *i = ft_strchr(arr[num], c);
		char *ii = strchr(arr[num], c);
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

void	test_strclr(void)
{
	char *testname = "ft_strclr";
	int count = 0, len = 10;
	char ii = '\0';
	char i[] = "HelloWorld";
	ft_strclr(i);
	
	for (int num = 0; num < len; num++)
	{
		if (i[num] == ii)
			count++;
		else
			cTESTFAIL(testname, num, i[num], ii);
	}
	if (count == len)
		TESTOK(testname, count, len);
	else
		TESTFAIL(testname, count, len);
}

void	test_strcpy(void)
{
	char *testname = "ft_strcpy";
	int count = 0, len = 5;
	char *src[] = { "HelloWorld", "Hello\0World", "", "Welp" };
	char arr[30], arr2[30];
	char *i, *ii;
	for (int num = 0; num < len - 1; num++)
	{
		i = ft_strcpy(arr, src[num]);
		ii = strcpy(arr2, src[num]);
		if (strcmp(i, ii) == 0)
			count++;
		else
			sTESTFAIL(testname, num, i, ii);
	}
	if (i[strlen(i)] == '\0')
		count++;
	else
		cTESTFAIL(testname, len, i[strlen(i)], '0');

	if (count == len)
		TESTOK(testname, count, len);
	else
		TESTFAIL(testname, count, len);
}

void	test_strdup(void)
{
	char *testname = "ft_strdup";
	int count = 0, len = 5;
	char *src[] = { "HelloWorld", "Hello\0World", "", "Welp" };
	char *i, *ii;
	for (int num = 0; num < len - 1; num++)
	{
		i = ft_strdup(src[num]);
		ii = strdup(src[num]);
		if (strcmp(i, ii) == 0)
			count++;
		else
			sTESTFAIL(testname, num, i, ii);
	}
	if (i[strlen(i)] == '\0')
		count++;
	else
		cTESTFAIL(testname, len, i[strlen(i)], '0');

	if (count == len)
		TESTOK(testname, count, len);
	else
		TESTFAIL(testname, count, len);
}

void	test_strlen(void)
{
	char *testname = "ft_strlen";
	int count = 0, len = 4;
	char *src[] = { "HelloWorld", "Hello\0World", "", "Welp" };
	int i, ii;
	for (int num = 0; num < len; num++)
	{
		i = ft_strlen(src[num]);
		ii = strlen(src[num]);
		if (i == ii)
			count++;
		else
			iTESTFAIL(testname, num, i, ii);
	}
	if (count == len)
		TESTOK(testname, count, len);
	else
		TESTFAIL(testname, count, len);
}

void	test_strncpy(void)
{
	char *testname = "ft_strncpy";
	int count = 0, len = 4;
	char *src[] = { "HelloWorld", "", "Hello\0World", "Welp" };
	char arr[13], arr2[13];
	char *i, *ii;
	//Test 0
	i = ft_strncpy(arr, src[0], 8);
	ii = strncpy(arr2, src[0], 8);
	if ((strcmp(i, ii) != 0) && i[strlen(i) != '\0'])
		count++;
	else
		sTESTFAIL(testname, 0, i, ii);
	//Test 1-3
	for (int j = 1; j < len; j++)
	{
		i = ft_strncpy(arr, src[j], 11);
		ii = strncpy(arr2, src[j], 11);
		bool isEqual = 1;
		for (int n = 0; n < 11; n++)
		{
			if (strcmp(i, ii) != 0)
				isEqual = 0;
		}
		if (isEqual == 1)
			count++;
		else
			sTESTFAIL(testname, j, i, ii);
	}
	if (count == len)
		TESTOK(testname, count, len);
	else
		TESTFAIL(testname, count, len);
}

void	test_strnew(void)
{
	char *testname = "ft_strnew";
	int count = 0, len = 12;
	char *i = ft_strnew(10);
	char ii = '\0';
	if (i != NULL)
		count++;
	else
		sTESTFAIL(testname, 0, i, "Allocation failed");
	for (int num = 0; num < 11; num++)
	{
		if (i[num] == ii)
			count++;
		else
			cTESTFAIL(testname, num, i[num], '0');
	}
	if (count == len)
		TESTOK(testname, count, len);
	else
		TESTFAIL(testname, count, len);
}

void	test_strjoin(void)
{
	char *testname = "ft_strjoin";
	int count = 0, len = 4;
	char *arr = "Hello", *arr2 = "World", *arr3 = "", *arr4 = "";
	char *i = ft_strjoin(arr, arr2);
	char *ii = "HelloWorld";
	if (strcmp(i, ii) == 0)
		count++;
	else
		sTESTFAIL(testname, 0, i, ii);
	if (i[10] == '\0')
		count++;
	else
		cTESTFAIL(testname, 1, i[10], '0');
		
	i = ft_strjoin(arr3, arr4);
	if (strcmp(i, "") == 0)
		count++;
	else
		sTESTFAIL(testname, 2, i, "");
	if (i[0] == '\0')
		count++;
	else
		cTESTFAIL(testname, 3, i[0], '0');
	if (count == len)
		TESTOK(testname, count, len);
	else
		TESTFAIL(testname, count, len);
}

void	test_strlcat()
{
	char *testname = "ft_strlcat";
	int count = 0, len = 6, buf = 20;
	char *src = "World!!!", *src2 = "ExtraCharacters to add";
	char arr[20] = "Hello", arr2[20] = "HelloWorld!!!";

	size_t i = ft_strlcat(arr, src, buf);
	size_t ii = 13;

	if (strcmp(arr, arr2) == 0)
		count++;
	else
		sTESTFAIL(testname, 0, arr, arr2);
	if (i == 13)
		count++;
	else	
		iTESTFAIL(testname, 1, (int)i, (int)ii);
	if (arr[13] == '\0')
		count++;
	else
		cTESTFAIL(testname, 2, arr[13], '0');
	size_t n = ft_strlcat(arr, src2, buf);
	if (strcmp(arr, "HelloWorld!!!ExtraC") == 0)
		count++;
	else
		sTESTFAIL(testname, 3, arr, "HelloWorld!!!ExtraC");
	if (arr[19] == '\0')
		count++;
	else
		cTESTFAIL(testname, 4, arr[19], '0');
	if (n == 35)
		count++;
	else
		iTESTFAIL(testname, 5, (int)n, 35);
	if (count == len)
		TESTOK(testname, count, len);
	else
		TESTFAIL(testname, count, len);
}

void	test_strncat(void)
{
	char *testname = "ft_strncat";
	int count = 0, len = 6;
	char *src = "World", *src2 = "";
	char arr[9] = "Hello", ii[9] = "HelloWor", dest[9] = "";
	char *i = ft_strncat(arr, src, 3);
	if (strcmp(i, ii) == 0)
		count++;
	else
		sTESTFAIL(testname, 0, i, ii);
	if (i[8] == '\0')
		count++;
	else
		cTESTFAIL(testname, 1, i[8], '0');
	
	i = ft_strncat(dest, src, 4);
	if (strcmp(i, "Worl") == 0)
		count++;
	else
		sTESTFAIL(testname, 2, i, "Worl");
	if (i[5] == '\0')
		count++;
	else
		cTESTFAIL(testname, 3, i[5], '0');
	
	i = ft_strncat(ii, src2, 3);
	if (strcmp(i, "HelloWor") == 0)
		count++;
	else
		sTESTFAIL(testname, 4, i, "HelloWor");
	if (i[8] == '\0')
		count++;
	else
		cTESTFAIL(testname, 5, i[5], '0');

	if (count == len)
		TESTOK(testname, count, len);
	else
		TESTFAIL(testname, count, len);
}

void	test_strrchr(void)
{
	char *testname = "ft_strrchr";
	int count = 0, len = 7;
	char arr[7][50] = { "Helloworld", "JellycWorld", "  thisc is a basic test", "", "What are you looking for?"
					, "randocm strings && c symbols", "Hello\0c hidden" };
	unsigned char c = 'c';
	
	for (int num = 0; num < len; num++)
	{
		char *i = ft_strchr(arr[num], c);
		char *ii = strchr(arr[num], c);
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
/// FIX
void	test_strstr(void)
{
	char *testname = "ft_strstr";
	int count = 0, len = 30;
	char arr[10][50] = { "HelloWorld", "JellycWorld", "  thisc is a basic test", "", "What are you looking for?"
					, "randocm strings && c symbols", "Hello\0c hidden", "WorlHelloWorld", "worldWorlD", "WorlWorld" };
	char *needle = "World", *needle2 = "HelloWorld", *needle3 = "";
	char *i, *ii;
	int j = 11, k = 21;
	for (int num = 0; num < 10; num++)
	{
		i = ft_strstr(arr[num], needle);
		ii = strstr(arr[num], needle);
		if (i == ii)
			count++;
		else
			sTESTFAIL(testname, num, i, ii);
	}
	for (int num = 0; num < 10; num++)
	{
		i = ft_strstr(arr[num], needle2);
		ii = strstr(arr[num], needle2);
		if (i == ii)
			count++;
		else
			sTESTFAIL(testname, num + j, i, ii);
	}
	for (int num = 0; num < 10; num++)
	{
		i = ft_strstr(arr[num], needle3);
		ii = strstr(arr[num], needle3);
		if (i == ii)
			count++;
		else
			sTESTFAIL(testname, num + k, i, ii);
	}	
	if (count == len)
		TESTOK(testname, count, len);
	else
		TESTFAIL(testname, count, len);
}

void	test_strnstr(void)
{
	char *testname = "ft_strnstr";
	int count = 0, len = 40;
	char arr[10][50] = { "HelloWorld", "JellycWorld", "  thisc is a basic test", "", "What are you looking for?"
					, "randocm strings && c symbols", "Hello\0c hidden", "WorlHelloWorld", "worldWorlD", "WorlWorld" };
	char *needle = "World", *needle2 = "HelloWorld", *needle3 = "";
	size_t size = 7, size1 = 15, size2 = 0;
	char *i, *ii;
	int j = 11, k = 21, l = 31;
	for (int num = 0; num < 10; num++)
	{
		i = ft_strnstr(arr[num], needle, size);
		ii = strnstr(arr[num], needle, size);
		if (i == ii)
			count++;
		else
			sTESTFAIL(testname, num, i, ii);
	}
	for (int num = 0; num < 10; num++)
	{
		i = ft_strnstr(arr[num], needle2, size1);
		ii = strnstr(arr[num], needle2, size1);
		if (i == ii)
			count++;
		else
			sTESTFAIL(testname, num + j, i, ii);
	}
	for (int num = 0; num < 10; num++)
	{
		i = ft_strnstr(arr[num], needle3, size);
		ii = strnstr(arr[num], needle3, size);
		if (i == ii)
			count++;
		else
			sTESTFAIL(testname, num + k, i, ii);
	}
	for (int num = 0; num < 10; num++)
	{
		i = ft_strnstr(arr[num], needle, size2);
		ii = strnstr(arr[num], needle, size2);
		if (i == ii)
			count++;
		else
			sTESTFAIL(testname, num + l, i, ii);
	}	
	if (count == len)
		TESTOK(testname, count, len);
	else
		TESTFAIL(testname, count, len);
}

static char ft_tolower2(char c)
{
	return (ft_tolower(c));
}

void	test_strmap(void)
{
	char *testname = "ft_strmap";
	int count = 0, len = 6;
	char *i;
	char arr[6][30] = { "", "HELLOWORLD", "TeStInG", "1231,s$@$Does it work"
						, "HIDDEN\0MEANING", "testworld" };
	char ii[6][30] = { "", "helloworld", "testing", "1231,s$@$does it work"
						, "hidden\0MEANING", "testworld" };
	for (int n = 0; n < 6; n++)
	{
		i = ft_strmap(arr[n], &ft_tolower2);
		if (strcmp(i, ii[n]) == 0)
			count++;
		else
			sTESTFAIL(testname, n, i, ii[n]);
	}

	if (count == len)
		TESTOK(testname, count, len);
	else
		TESTFAIL(testname, count, len);
}

static char ft_toupper2(unsigned i, char c)
{
	if (i % 2 == 0)
		return (ft_toupper(c));
	else
		return (ft_tolower(c));
	return (c);
}

void	test_strmapi(void)
{
	char *testname = "ft_strmapi";
	int count = 0, len = 6;
	char *i;
	char arr[6][30] = { "", "HELLOWORLD", "TeStInG", "1231,s$@$Does it work"
						, "HIDDEN\0MEANING", "testworld" };
	char ii[6][30] = { "", "HeLlOwOrLd", "TeStInG", "1231,s$@$dOeS It wOrK"
						, "HiDdEn\0MEANING", "TeStWoRlD" };
	for (int n = 0; n < 6; n++)
	{
		i = ft_strmapi(arr[n], &ft_toupper2);
		if (strcmp(i, ii[n]) == 0)
			count++;
		else
			sTESTFAIL(testname, n, i, ii[n]);
	}

	if (count == len)
		TESTOK(testname, count, len);
	else
		TESTFAIL(testname, count, len);
}

static void ft_incrementvalue(char *str)
{
	while(*str)
	{
		if (ft_isalpha(*str))
			*str += 1;
		str++;
	}
}

void	test_striter(void)
{
	char *testname = "ft_striter";
	int count = 0, len = 6;
	char *i;
	char arr[6][30] = { "", "HELLOWORLD", "TeStInG", "1231,s$@$Does it work"
						, "HIDDEN\0MEANING", "testworld" };
	char ii[6][30] = { "", "IGOPT[VZUN", "UgVxNtN", "1231,y$@$Nzq{ x{ {{{{"
						, "IKGHJT\0MEANING", "ugvx{uytm" };
	
	
	for (int n = 0; n < 6; n++)
	{
		ft_striter(arr[n], &ft_incrementvalue);
		if (strcmp(arr[n], ii[n]) == 0)
			count++;
		else
			sTESTFAIL(testname, n, arr[n], ii[n]);
	}

	if (count == len)
		TESTOK(testname, count, len);
	else
		TESTFAIL(testname, count, len);
}

static void ft_decrementvalue(unsigned i, char *str)
{
	if (i % 2 == 0)
	{
		while(*str)
		{
			if (ft_isalpha(*str))
				*str += 1;
			str++;
		}
	}
}


void	test_striteri(void)
{
	char *testname = "ft_striteri";
	int count = 0, len = 6;
	char *i;
	char arr[6][30] = { "", "HELLOWORLD", "TeStInG", "1231,s$@$Does it work"
						, "HIDDEN\0MEANING", "testworld" };
	char ii[6][30] = { "", "IFNNRZSVQI", "UfUvLqK", "1231,v$@$Iukz q{ {y{v"
						, "IJFFHQ\0MEANING", "ufuvzrvpi" };
	
	
	for (int n = 0; n < 6; n++)
	{
		ft_striteri(arr[n], &ft_decrementvalue);
		if (strcmp(arr[n], ii[n]) == 0)
			count++;
		else
			sTESTFAIL(testname, n, arr[n], ii[n]);
	}

	if (count == len)
		TESTOK(testname, count, len);
	else
		TESTFAIL(testname, count, len);
}

void	test_strsub(void)
{
	char *testname = "ft_strsub";
	int count = 0, len = 12, j = 7;
	char *i;
	char arr[6][30] = { "", "HELLOWORLD", "TeStInG", "1231,\0s$@$Does it work"
						, "HIDD\0ENMEANING", "testworld" };
	char ii[6][30] = { "", "LOWOR", "tInG", "1,"
						, "D", "tworl" };
	char arr2[6][30] = { "", "WORLD", "nG", ""
						, "ENMEANIN", "orld" };
	
	for (int n = 0; n < 6; n++)
	{
		i = ft_strsub(arr[n], 3, 5);
		if (strcmp(i, ii[n]) == 0)
			count++;
		else
			sTESTFAIL(testname, n, i, ii[n]);
	}
	for (int n = 0; n < 6; n++)
	{
		i = ft_strsub(arr[n], 5, 8);
		if (strcmp(i, arr2[n]) == 0)
			count++;
		else
			sTESTFAIL(testname, n + j, i, arr2[n]);
	}
	if (count == len)
		TESTOK(testname, count, len);
	else
		TESTFAIL(testname, count, len);
}

void	test_strtrim(void)
{
	char *testname = "ft_strtrim";
	int count = 0, len = 7;
	char *i;
	char arr[7][50] = { "", "    HELLOWORLD", "TeStInG      ", "  \t 12 \t 31,\ts$@$Does it work\t\t   "
						, "     HIDD\0ENMEANING \t\t", "testworld", "       \t\t\t\t\t" };
	char ii[7][50] = { "", "HELLOWORLD", "TeStInG", "12 \t 31,\ts$@$Does it work"
						, "HIDD\0ENMEANING", "testworld", "" };
	for (int n = 0; n < 7; n++)
	{
		i = ft_strtrim(arr[n]);
		if (strcmp(i, ii[n]) == 0)
			count++;
		else
			sTESTFAIL(testname, n, i, ii[n]);
	}
	if (count == len)
		TESTOK(testname, count, len);
	else
		TESTFAIL(testname, count, len);
}

void	test_strsplit(void)
{
	char *testname = "ft_strsplit";
	int count = 0, len = 20, j = 0;
	char **i;
	char arr[7][50] = { "" // 0
						, "    HELL  O WO R   LD" // 1
						,"T e St   InG      " // 2
						, "   12\t31, \ts$ @$  Does it work\t\t   " // 3
						, "     HIDDEN MEAN ING \t\taat" // 4
						, "testworld" // 5
						, "       " }; // 6
						
	char arr1[5][50] = { "HELL", "O", "WO", "R", "LD"};
	char arr2[4][50] = { "T", "e", "St", "InG" };
	char arr3[6][50] = { "12\t31,", "\ts$", "@$", "Does", "it", "work\t\t" };
	char arr4[4][50] = { "HIDDEN", "MEAN", "ING", "\t\taat" };




	
	char c = ' ';
	i = ft_strsplit(arr[j], c); // j = 0
	if (i[0] == NULL, i[1] == NULL)
		count++;
	else
		printf("fail");///Fail
	
	j++; // j = 1
	i = ft_strsplit(arr[j], c);
	for (int n = 0; n < ft_countstrings(arr[j], c); n++)
	{
		if (strcmp(i[n], arr1[n]) == 0)
			count++;
		else
			sTESTFAIL(testname, n + 1, i[n], arr1[n]);
	}
	j++; // j = 2
	i = ft_strsplit(arr[j], c);
	for (int n = 0; n < ft_countstrings(arr[j], c); n++)
	{
		if (strcmp(i[n], arr2[n]) == 0)
			count++;
		else
			sTESTFAIL(testname, n + 6, i[n], arr2[n]);
	}

	j++; // j = 3
	i = ft_strsplit(arr[j], c);
	for (int n = 0; n < ft_countstrings(arr[j], c); n++)
	{
		if (strcmp(i[n], arr3[n]) == 0)
			count++;
		else
			sTESTFAIL(testname, n + 10, i[n], arr3[n]);
	}


	j++; // j = 4
	i = ft_strsplit(arr[j], c);
	for (int n = 0; n < ft_countstrings(arr[j], c); n++)
	{
		if (strcmp(i[n], arr4[n]) == 0)
			count++;
		else
			sTESTFAIL(testname, n + 16, i[n], arr4[n]);
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
	test_memmove();
	test_memset();
	test_strcat();
	test_strchr();
	test_strclr();
	test_strcpy();
	test_strdup();
	test_strlen();
	test_strncpy();
	test_strnew();
	test_strjoin();
	test_strlcat();
	test_strncat();
	test_strrchr();
	test_strstr();
	test_strnstr();
	test_strmap();
	test_strmapi();
	test_striter();
	test_striteri();
	test_strsub();
	test_strtrim();
	test_strsplit();
	
	/*

	
	


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
	
	// -I. libft_tests.h libft.h
	//cat -e author && cat libft.h | grep "# include" > test.txt&& cat libft.h | grep "ft_" >> test.txt && cat libft.h | grep -A 5 "typedef" >> test.txt  && diff test.txt prototypelist.txt
	return (0);
}
