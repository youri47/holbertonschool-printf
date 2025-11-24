#include "main.h"

/**
 * main - teste la fonction _printf
 *
 * Return: toujours 0
 */
int main(void)
{
    int len;
    
    /* Test 1 : afficher un caractère */
    len = _printf("Caractère : %c\n", 'A');
    _printf("Longueur : %d\n\n", len);
    
    /* Test 2 : afficher une chaîne */
    len = _printf("Chaîne : %s\n", "Bonjour le monde!");
    _printf("Longueur : %d\n\n", len);
    
    /* Test 3 : afficher le symbole % */
    len = _printf("Pourcentage : %%\n");
    _printf("Longueur : %d\n\n", len);
    
    /* Test 4 : mélange de tout */
    len = _printf("Lettre: %c, Mot: %s, Symbole: %%\n", 'Z', "Test");
    _printf("Longueur : %d\n\n", len);
    
    return (0);
}
