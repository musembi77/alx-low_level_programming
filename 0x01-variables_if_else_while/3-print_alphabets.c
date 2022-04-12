#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

/**
 * main-Entry
 *
 * description - printslowercase then uppercase 
 *
 * Return: Always(0) Success
 *
 * */

int main(void)
{
	char x;

	for(x = "a"; x <= "z" ;x++)
		putchar(x);
	for(x = "A"; x <= "Z"; x++)
		putchar(x);
	putchar("\n");
	return (0);
}
