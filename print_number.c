#include "main.h"

/**
 * print_number - Affiche un entier sur stdout
 * @n: L'entier à afficher
 *
 * Return: Le nombre de caractères affichés
 */
int print_number(int n)
{
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

	if (num / 10 != 0)
	{
		count += print_number(num / 10);
	}

	_putchar((num % 10) + '0');
	count++;

	return (count);
}
