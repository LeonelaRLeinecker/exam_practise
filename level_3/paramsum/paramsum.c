#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void ft_putnbr(int n)
{
	char nbr;
	if (n >= 10)
		ft_putnbr(n / 10);
	nbr = n % 10 + 48;
	write(1, &nbr, 1);
}
int main(int argc, char **argv)
{
	(void)argv;
	ft_putnbr(argc - 1);
	write(1, "\n", 1);
	return 0;

}
