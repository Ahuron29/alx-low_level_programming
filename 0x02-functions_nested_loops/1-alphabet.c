#include "main.h"
/**
 * print_alphabet - prints the alphabet in lowercase.
 *
 * Description: Uses the holberton header file, that brings in the _putchar
 *  funtction.
 * Return: void.
 */

void print_alphabet(void)
{
char ch;

ch = 'a';

while (ch <= 'z')
{
_putchar(ch);
++ch;
}
_putchar('\n');
}
