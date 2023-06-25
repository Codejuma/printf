#include "main.h"
/**
 * print_unsigned - print the unsigned integer
 * @num: the no to print
 * Return: the len of the no
 */
int print_unsigned(va_list num)
{
	char *p_bf;
	int count;

	p_bf = itoa(va_arg(num, unsigned int), 10);

	count = print((p_bf != NULL) ? p_bf : "NULL");

	return (count);
}
