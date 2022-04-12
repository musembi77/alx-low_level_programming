#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

/**
 * main -Entry
 *
 * desciption - prints all alphabets in lowercase except q and e
 *
 * Return: Always (0) Success
 *
 * */
int main(void)
{
	int x;

	for (x = "a"; x <="z"; x++)
		if(x != "q" && x != "e")
			putchar(x);
	putchar("\n");
	return (0);
}
