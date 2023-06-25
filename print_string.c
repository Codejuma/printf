#include "main.h"
/**
 * print_string - print the str
 * @num: the number of list
 * Return: the str len
 */
int print_string(va_list num)
{
	char *ptr;
	int pr_len;

	ptr = va_arg(num, char*);
	pr_len = print((ptr != NULL) ? ptr : "(null)");

	return (pr_len);
}
