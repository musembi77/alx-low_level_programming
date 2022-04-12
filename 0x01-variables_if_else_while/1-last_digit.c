#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point 
 *
 * description - finding the last digit of a variable
 *
 * Return: Always (0) Success
 *
 * */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	decimal = (n % 10);

	if (decimal > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, decimal);
	else
		if(decimal == 0)
			printf("Last digit of %d is %d and is 0\n", n, decimal);
		else
			printf("Last digit of %d is %d and is less than 6 and is not 0\n", n, decimal);
	return (0);
}
