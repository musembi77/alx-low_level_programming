#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

/**
 * main - Entry point
 *
 * description - prints lowercase alphabets in reverse
 *
 * Return:Always (0) Success
 * */
int main(void)
{
	char x;

	for( x = "z"; x >= "a" ; x--)
		putchar(x);
	putchar("\n");
	return (0);
}
