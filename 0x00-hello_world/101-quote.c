#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
	fwrite(STDOUT_FILENO, "and that piece of art is useful
			\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
