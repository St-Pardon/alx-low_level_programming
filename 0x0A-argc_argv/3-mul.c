#include <stdio.h>

/**
 * main - main funct
 * @argc: param count.
 * @argv: param pointer
 * Return: int
 */
int main(int argc, char *argv[])
{
	if (argc < 1)
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
