#include <stdlib.h>
int ft_int_len(int n)
{
	int len = 0;
	while (n != 0)
	{
		n = n/10;
		len++;
	}
	return (len);
}
char *ft_itoa(int nbr)
{
	long n = nbr;
	//int i = 0;
	int len = ft_int_len(n);
	char *str = malloc(len+1);

	if (!str)
		return NULL;
	str[len] = '\0';
	if (n == 0)
		str[0] = '0';

	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	while (n > 0)
	{
		str[--len] = n % 10 + 48;
		
		n = n/10;
	}
	return (str);
}
#include <stdio.h>
int main()
{
	int n = 56;
	printf("%s", ft_itoa(n));
	return 0;
}

