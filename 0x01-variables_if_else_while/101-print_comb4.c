#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

/**
 * main -Entry point
 *
 * description - prints all possible combinations of 3 digits
 *
 * Return : Always (0) Success
 *
 * */

int main(void)
{
	int c,b,a;

	for (c = 0; c <= 7; c++)
		for (b = c+1; b <= 8 ; b++)
			for (a = b+1; a <= 9 ; a++)
			{
				putchar(c);
				putchar(b);
				putchar(a);
				if(c == 7 && b == 8 && a == 9)
				{
				}
				else
				{
					putchar(",");
					putchar(" ");
				}
			}
	putchar("\n");
	return (0);
}
