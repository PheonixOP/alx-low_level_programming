#include <stdio.h>
#include <unistd.h>

/**
 * main - Prints a certain text without the use of printf or puts functions
 * followed by a newline, to standard error
 *
 * Return: 1 (Success)
 */

int main(void)
{
	fput("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", stdout);
	return (1);
}
