#include "main.h"
/**
 * print_hexadecimal_low - print the no in hexa format
 * @num: the number to print
 * Return: len of the no
 */
int print_hexadecimal_low(va_list num)
{
	char *p_bf;
	int count;

	p_bf = itoa(va_arg(num, unsigned int), 16);

	count = print((p_bf != NULL) ? p_bf : "NULL");

	return (count);
}
