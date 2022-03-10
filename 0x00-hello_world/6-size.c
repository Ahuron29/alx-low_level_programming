#include <stdio.h>

/**
 * mian - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
int a; long int b; long long int c; char d; float e;
printf("Size of a int: %lu byts(s)\n", (unsigned long)sizeof(a));
printf("Size of a long int: %lu byt(s)\n", (unsigned long)sizeof(b));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(e));
return (0);
}
