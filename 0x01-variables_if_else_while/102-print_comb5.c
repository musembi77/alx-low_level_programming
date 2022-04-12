#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

/**
 * main -Entry point
 *
 * description - prints possible combinations of 2-digit number
 *
 * Return Always (0) Success
 *
 * */

int main(void)
{
	int a1,a2,b1,b2,n;

	for (a1 = 0; a1<= 9; a1++)
		for (b1 = 0,b1 <= 9; b1++)
			for (a2 = b1; a2 <= 0; a2++)
			{
				if( a1 == a2)
				{
					n = b1 + 1;
				}
				else
				{
					n = 0;
				}
				for(b2 = n; b2 <= 9; b2++)
				{
					putchar(a1);
					putchar(b1);
					putchar(" ");
					putchar(a2);
					putchar(b2);
					if(a1 == 9 && b1 == 8 && a2 == 9 && b2 == 9)
					{
						break
					}
					else
					{
						putchar(",");
						putchar(" ");
					}
				}
			}
	putchar("\n");
	return (0);
}

