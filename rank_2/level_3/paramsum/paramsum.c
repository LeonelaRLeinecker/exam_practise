#include <unistd.h>

void ft_putnbr(int num)
{
	char n;

	if (num >= 10)
		ft_putnbr(num / 10);
	n = (num % 10) + 48;
	write(1, &n, 1);
}

int ft_atoi(char *str)
{
	int i = 0;
	int res = 0;
	int sign = 1;

	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13) || str[i] == '+' || str[i] == '-')
		i++;
	while(str[i])
	{
		res = (res * 10) + (str[i] - 48);
		i++;
	}
	return (res * sign);
}

int main(int argc, char **argv)
{
	(void)*argv;
	if (argc > 0)
	{
		ft_putnbr(argc - 1);

	}
	write(1, "\n", 1);
	return 0;
}
