#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

/**
 * main -Entry point
 *
 * description - prints all single digits from 0 - 10
 *
 * 
 * Return: Always (0) Success
 * */
int main(void)
{
	int n;

	for(n = "0"; n <= "9"; n++)
		putchar(n);
	putchar("\n");
	return (0);
}
