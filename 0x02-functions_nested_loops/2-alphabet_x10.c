#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times.
 * Description: uses 2 for loops to pring a to z
 * 10 times.
 * Return: void.
 */

void print_alphabet_x10(void)
{
char ch;
int num;

for (num = 0; num < 10; ++num)
{
for (ch = 'a'; ch <= 'z'; ++ch)
{
_putchar(ch);
}
_putchar('\n');
}
}
