#include <stdio.h>
#include <unistd.h>
/**
 * main - this prints exactly the input on it
 * Return: Always 1
 */
int main(void)
{
	char s[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fput(s, stdout);
	return (1);
}
