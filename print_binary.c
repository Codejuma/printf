#include "main.h"
/**
 * print_binary - print the no to base 2
 * @num: no to prit base 2
 * Return: len of the no in binary
 */
int print_binary(va_list num)
{
	char *p_bf;
	int count;

	p_bf = itoa(va_arg(num, unsigned int), 2);

	count = print(p_bf);

	return (count);
}
