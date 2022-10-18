#include <stdio.h>

/**
 *main-program entry point.
 *Return:0 if no error, non zero if error.
 */
int main(void)
{
	char i;
	char a;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	for (a = 'A'; a <= 'Z'; a++) 
	{
	       putchar(a);
	}
	putchar('\n');
	return (0);
}
