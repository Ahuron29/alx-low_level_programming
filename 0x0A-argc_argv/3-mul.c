#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number of arguments passed to the function
 * @argv: argument vector of pointers to strings
 *
 * Return: 0 if no errors, else 1
 */
int main(int argc, char *argv[])
{
<<<<<<< HEAD
int a, b, c;

if (argc != 3)
{
puts("Error");
return (1);
}
a = atoi(argv[1]);
b = atoi(argv[2]);
c = a *b;
printf("%d\n", c);
return (0);
=======
	int a, b, c;

	if (argc != 3)
	{
		puts("Error");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	c = a *b;
	printf("%d\n", c);
	return (0);
>>>>>>> 9a41957c4841499de9c8237be0f4f4b088f1aa7b
}
