#include <stdio.h>
/**
 * main - prints the name of the file it was compiled from
 * @void: This function takes no arguments
 *
 * Return: 1 if sucessful, 0 if otherwise.
 */
int main(void)
{
	printf("%s\n", __FILE__);

	return (1);
}
