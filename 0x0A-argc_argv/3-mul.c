#include <stdio.h>
#include <stdlib.h>

/**
 * main - main funct
 * @argc: param count.
 * @argv: param pointer
 * Return: int
 */
int main(int argc, char *argv[])
{
/*stdlib was included because of the "atio()" function*/
/* the funct is used to covert str to int*/
/* because the argv is an arrays of characters*/
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
