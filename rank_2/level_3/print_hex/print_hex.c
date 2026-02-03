#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int i = 0;
	while(str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void ft_putnbr(int nbr)
{
	char n;
	if (nbr >= 10)
		ft_putnbr(nbr/10);
	n = (nbr % 10) + 48;
	ft_putchar(n);

}

int ft_atoi(char *str)
{
	int i = 0;
	int sign = 1;
	int num = 0;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while(str[i] == 32 || str[i] == '+' || str[i] == '-')
		i++;
	while(str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - 48);
		i++;
	}
	return (num * sign);
}

void ft_hexa(int n)
{
	char hexa[] = "0123456789abcdef";

	if (n >= 16)
		ft_hexa(n / 16);
	ft_putchar(hexa[n % 16]);

}
int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int n = ft_atoi(argv[1]);
		ft_hexa(n);
	}
	write(1, "\n", 1);
	return 0;
}
