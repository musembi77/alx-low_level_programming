#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

/**
 *
 * main - Entry Point
 *
 * description - print alphebet in lowercase
 *
 * Return: Always (0)
 *
 * */

int main(void)
{
	char x;

	for(x = 'a'; x <= 'z'; x ++)
		putchar(x);
	putchar('\n');
	return (0);
}
