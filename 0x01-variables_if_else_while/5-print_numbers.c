#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * description - prints single digits no.s stating from base 10
 *
 * Return: Always(0) Success
 * */
int main(void)
{
	int n;

	for (n = 0 ; n <= 9 ; n++)
		printf("%d" , n);
	printf("\n");
	return (0);
}
