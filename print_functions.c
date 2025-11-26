#include "main.h"

/**
 * print_char - affiche un caractère
 * @args: liste des arguments variables
 *
 * Return: 1
 */
int print_char(va_list args)
{
	char c = va_arg(args, int);

	_putchar(c);
	return (1);
}

/**
 * print_string - affiche une chaîne de caractères
 * @args: liste des arguments variables
 *
 * Return: nombre de caractères imprimés
 */
int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	int count = 0;

	if (str == NULL)
		str = "(null)";

	while (str[count])
	{
		_putchar(str[count]);
		count++;
	}

	return (count);
}

/**
 * print_percent - affiche le symbole %
 * @args: liste des arguments (non utilisée)
 *
 * Return: 1
 */
int print_percent(va_list args)
{
	(void)args;

	_putchar('%');
	return (1);
}

/**
 * print_number_recursive - fonction récursive pour afficher un nombre
 * @n: nombre à afficher
 *
 * Return: nombre de caractères imprimés
 */
int print_number_recursive(unsigned int n)
{
	int count = 0;

	if (n / 10)
		count += print_number_recursive(n / 10);

	_putchar((n % 10) + '0');
	count++;

	return (count);
}

/**
 * print_number - affiche un nombre entier
 * @args: liste des arguments variables
 *
 * Return: nombre de caractères imprimés
 */
int print_number(va_list args)
{
	int n = va_arg(args, int);
	int count = 0;
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		count++;
		num = -n;
	}
	else
	{
		num = n;
	}

	if (num / 10)
		count += print_number_recursive(num / 10);

	_putchar((num % 10) + '0');
	count++;

	return (count);
}
