#include <stdio.h>

/**
 * main2 - function executed before main
 */

void __attribute__ ((constructor)) main2()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
