#include "main.h"
#include <stdio.h>
int _strcmp(char *, char *);
/**
 * print_pointer - print the no in hexa
 * @num: no to print
 * Return: len of the no
 */
int print_pointer(va_list num)
{
	char *p_bf;
	int count;

	p_bf = itoa(va_arg(num, unsigned long int), 16);

	if (!_strcmp(p_bf, "0"))
		return (print("(nil)"));

	count = print("0x");

	if (!_strcmp(p_bf, "-1"))
		count += print("ffffffffffffffff");
	else
		count += print(p_bf);

	return (count);
}
/**
 * _strcmp - comparing 2 strs
 * @str1: string one
 * @str2: string two
 * Return: return the integer
 */
int _strcmp(char *str1, char *str2)
{
	int j;

	for (j = 0; str1[j] != '\0'; j++)
	{
		if (str1[j] != str2[j])
			return (str1[j] - str2[j]);
	}
	return (0);
}
