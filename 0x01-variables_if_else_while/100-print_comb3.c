#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

/**
 * main -Entry point
 *
 * description - print possible combinations
 *
 * Return : Always(0) Success
 * */
int main (void)
{
	int x,n;

	for(n = "0"; n <= "8"; n++)
		for(x = n+1; x <= "9"; x++)
		{
			putchar(n);
			putchar(x);
			if(x == "9" && n == "8")
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
