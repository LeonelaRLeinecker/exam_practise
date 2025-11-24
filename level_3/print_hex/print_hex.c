#include <unistd.h>

int atoi(char *str)
{
	int n = 0;
	while (*str)
	{
		n = n * 10 + (*str - 48);
		str++;
	}
	return (n);
}

void print_hexa(int n)
{
	char hexa[] = "0123456789abcdef";
	if (n >= 16)
		print_hexa(n / 16);
	write(1, &hexa[n % 16], 1);
}
#include <stdio.h>
int main(int argc, char **argv)
{
	int n = atoi(argv[1]);
	printf("n = %d", n);
	if (argc == 2)
	{
		print_hexa(n);
	}
	write(1, "\n", 1);
	return 0;
}
