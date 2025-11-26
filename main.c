#include "main.h"

/**
 * main - teste la fonction _printf avec %d et %i
 *
 * Return: toujours 0
 */
int main(void)
{
	int len;

	/* Test 1 : nombres positifs */
	len = _printf("Nombre positif : %d\n", 42);
	_printf("Longueur : %d\n\n", len);

	/* Test 2 : nombres négatifs */
	len = _printf("Nombre négatif : %d\n", -98);
	_printf("Longueur : %d\n\n", len);

	/* Test 3 : zéro */
	len = _printf("Zéro : %i\n", 0);
	_printf("Longueur : %d\n\n", len);

	/* Test 4 : grands nombres */
	len = _printf("Grand nombre : %i\n", 2147483647);
	_printf("Longueur : %d\n\n", len);

	/* Test 5 : mélange de tout */
	len = _printf("Lettre: %c, Nombre: %d, Mot: %s, Signe: %%\n", 'Z', 123, "Test");
	_printf("Longueur : %d\n\n", len);

	return (0);
}
