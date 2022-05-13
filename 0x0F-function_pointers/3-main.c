#include "3-calc.h"

/**
 * main - test funct
 * @argc: arg count param
 * @argv: arg array param
 * Return: int
 */

int main(int argc, char *argv[])
{
	int i, j;
	int (*calculate)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}

	calculate = get_op_func(argv[2]);

	if (calculate == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	i = atoi(argv[1]);
	j = atoi(argv[3]);

	printf("%d\n", calculate(i, j));
	return (0);
}
