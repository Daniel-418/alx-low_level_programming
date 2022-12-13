int _putchar(char c);

/**
  * main - prints "putchar" followed by a new line
  * @void: It doesn't take any argument
  *
  * Return: 0 (Always success)
  */
int main(void)
{
	int i;
	char string[] = "_putchar\n";

	for (i = 0; string[i] != '\0'; i++)
		_putchar(string[i]);

	return (0);
}
