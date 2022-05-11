#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <math.h>
#include <string.h>
/*array of 100000000 (4GB) needs a capable system*/
/*provided space on the vagrant doesn't cut it*/
#define MAX 10000000

char *multiply(char [], char []);


/**
 * main - multiply 2 arg of num > 0
 * @argc: param count
 * @argv: param arr
 * Return: int
 */
int main(int argc, char *argv[])
{
	unsigned long mul;
	int i, j;
	char *c;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > 57 || argv[i][j] < 48)
			{
				printf("Error\n");
				exit(98);
			}
		}

	}

	c = multiply(argv[1], argv[2]);

	for (mul = 1; c[mul] != '\0'; mul++)
		_putchar(c[mul]);
	_putchar('\n');

	return (0);
}

/**
 * multiply - multiply the inputs
 * @a: param
 * @b: param
 * Return: char pointer
 */

char *multiply(char a[], char b[])
{
	/*static char mul[MAX];*/
	char *mul;
	char *c;
	char *temp;
	int la, lb;
	int i, j, k = 0, x = 0, y;
	long int r = 0;
	long sum = 0;

	la = strlen(a) - 1;
	lb = strlen(b) - 1;
	printf("%d\n%d\n", la, lb);

	mul = malloc(sizeof(char) * ((la + lb) * 5));
	c = malloc(sizeof(char) * (la + lb) * 2);
	temp = malloc(sizeof(char) * (la + lb) * 2);

	for (i = 0; i <= la; i++)
		a[i] = a[i] - 48;

	for (i = 0; i <= lb; i++)
		b[i] = b[i] - 48;

	for (i = lb; i >= 0; i--)
	{
		r = 0;

		for (j = la; j >= 0; j--)
		{
			temp[k++] = (b[i] * a[j] + r) % 10;
			r = (b[i] * a[j] + r) / 10;
		}
		temp[k++] = r;
		x++;

		for (y = 0; y < x; y++)
		{
			temp[k++] = 0;
		}
	}

	k = 0;
	r = 0;

	for (i = 0; i < la + lb + 2; i++)
	{
		sum = 0;
		y = 0;

		for (j = 1; j <= lb + 1; j++)
		{
			if (i <= la + j)
			{
				sum = sum + temp[y + i];
			}
			y += j + la + 1;
		}
		c[k++] = (sum + r) % 10;
		r = (sum + r) / 10;
	}
	c[k] = r;
	j = 0;
	for (i = k - 1; i >= 0; i--)
	{
		mul[j++] = c[i] + 48;
	}
	mul[j] = '\0';
	free(c);
	free(temp);
	return (mul);
}
