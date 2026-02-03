#include <stdio.h>

int to_digit(char c)
{
	int n = 0;
	if (c >= '0' && c <= '9')
		n = c - 48;
	else if (c >= 'a' && c <= 'z')
		n = (10 + (c - 'a'));
	else if(c >= 'A' && c <= 'Z')
		n = (10 + (c - 'A'));
	else
		return (-1);
	return (n);
}

int ft_atoi_base(const char *str, int str_base)
{
	int num = 0;
	int i = 0;
	int result = 0;
	int sign = 1;

	if (str_base < 2 || str_base > 16)
		return 0;
	if (str[i] == '-')
	{
		sign = -1;
                i++;
        }

	while (str[i])
	{
		num = to_digit(str[i]);
		printf("num = %d\n", num);
		if (num < 0 || num >= str_base)
			break;
		result = result * str_base + num;
		i++;
	}
	return (result * sign);
}

int main()
{
	const char str[] = "77";
	int str_base = 8;
	printf("resultado: %d\n", ft_atoi_base(str, str_base));
	return 0;
}
