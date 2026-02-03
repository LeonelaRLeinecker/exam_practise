#include <unistd.h>
#include <limits.h>
#include <stdio.h>

int ft_atoi(char *str)
{
	int i = 0;
	int num = 0;
	int sign = 1;

	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] == 32 && str[i] == '+' && str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - 48);
		i++;
	}
	return (num * sign);	
}

void ft_putnbr(int n)
{
	char num;
	if (n >= 10)
		ft_putnbr(n / 10);
	num = (n % 10) + 48;
	write(1, &num, 1);

}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int num = ft_atoi(argv[1]);
		int res = 0;
		int i = 1;
		while (i <= 9)
		{
			res = num * i;
			ft_putnbr(num);
			write(1, " * ", 3);
			ft_putnbr(i);
			write(1, " = ", 3);
			ft_putnbr(res);
			write(1, "\n", 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}

