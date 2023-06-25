#include "main.h"
/**
 * itoa - integer
 * @nu: number
 * @bs: base
 * Return: character
 */
char *itoa(long int nu, int bs)
{
	static char *arr = "0123456789abcdef";
	static char buffer[50];
	char sg = 0;
	char *ptrr;
	unsigned long k = nu;

	if (nu < 0)
	{
		k = -nu;
		sg = '-';
	}
	ptrr = &buffer[49];
	*ptrr = '\0';

	do {
		*--ptrr = arr[k % bs];
		k /= bs;
	} while (k != 0);

	if (sg)
		*--ptrr = sg;
	return (ptrr);
}

