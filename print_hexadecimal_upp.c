#include "main.h"
int is_lowercase(char);
char *string_to_upper(char *);
/**
 * print_hexadecimal_upp - print the no in hexa
 * @num: no to print
 * Return: the len
 */
int print_hexadecimal_upp(va_list num)
{
	char *p_bf;
	int count;

	p_bf = itoa(va_arg(num, unsigned int), 16);
	p_bf = string_to_upper(p_bf);

	count = print((p_bf != NULL) ? p_bf : "NULL");

	return (count);
}
/**
 * is_lowercase - check if the char are in lowercase
 * @b: char
 * Return: 1 otherwise 0
 */
int is_lowercase(char b)
{
	return (b >= 'a' && b <= 'z');
}
/**
 * string_to_upper - change the str to uppercase
 * @str: string
 * Return: string uppercase
 */
char *string_to_upper(char *str)
{
	int j;

	for (j = 0; str[j] != '\0'; j++)
	{
		if (is_lowercase(str[j]))
		{
			str[j] = str[j] - 32;
		}
	}
	return (str);
}
